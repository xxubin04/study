package xxubin04.tobyspring.dao;

import xxubin04.tobyspring.domain.User;

import java.sql.*;

public class UserDao {
    public void add(User user) throws ClassNotFoundException, SQLException {
        Class.forName("com.mysql.cj.jdbc.Driver");  // MySQL JDBC 드라이버 로드
        Connection c = DriverManager.getConnection(  // DB 연결
                "jdbc:mysql://localhost:3306/study_db", "root", "1234");
        PreparedStatement ps = c.prepareStatement(
                "INSERT INTO USERS(id, name, password) VALUES(?,?,?)");
        ps.setString(1, user.getId());
        ps.setString(2, user.getName());
        ps.setString(3, user.getPassword());

        ps.executeUpdate();

        ps.close();
        c.close();

    }

    public User get(String id) throws ClassNotFoundException, SQLException {
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection c = DriverManager.getConnection(
                "jdbc:mysql://localhost:3306/study_db", "root", "1234");

        PreparedStatement ps = c.prepareStatement(  // SQL 문 준비 및 실행
                "select * from users where id = ?");
        ps.setString(1, id);

        ResultSet rs = ps.executeQuery();  // ResultSet 객체에 결과 저장
        rs.next();  // ResultSet의 첫 번째 레코드로 이동 
        User user = new User();
        user.setId(rs.getString("id"));
        user.setName(rs.getString("name"));
        user.setPassword(rs.getString("password"));

        rs.close();  // 자원 해제
        ps.close();
        c.close();

        return user;
    }

    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        UserDao dao = new UserDao();

        User user = new User();
        user.setId("whiteship");
        user.setName("백기선");
        user.setPassword("married");

        dao.add(user);

        System.out.println(user.getId() + " 등록 성공");

        User user2 = dao.get(user.getId());
        System.out.println(user2.getName());
        System.out.println(user2.getPassword());

        System.out.println(user2.getId() + " 조회 성공");
    }
}
