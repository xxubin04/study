package xxubin04.tobyspring;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import xxubin04.tobyspring.dao.UserDao;
import xxubin04.tobyspring.domain.User;

import java.sql.SQLException;

@SpringBootApplication
public class TobySpringApplication {

    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        UserDao dao = new UserDao();

        User user = new User();
        user.setId("54321");
        user.setName("유빈");
        user.setPassword("ohmygod");

        dao.add(user);

        System.out.println(user.getId() + " 등록 성공");

        User user2 = dao.get(user.getId());
        System.out.println(user2.getName());
        System.out.println(user2.getPassword());
        System.out.println(user2.getId() + " 조회 성공");
    }
}
