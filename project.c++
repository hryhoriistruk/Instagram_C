#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

// User class to represent a user in the Instagram Clone
class User {
private:
    std::string username;
    std::string password;
    std::string bio;
    std::vector<std::string> posts;

public:
    User(std::string username, std::string password, std::string bio)
        : username(username), password(password), bio(bio) {}

    void addPost(std::string post) {
        posts.push_back(post);
    }

    void likePost(std::string post) {
        // Logic for liking a post
    }

    void commentOnPost(std::string post, std::string comment) {
        // Logic for commenting on a post
    }

    void sendMessage(User recipient, std::string message) {
        // Logic for sending a direct message
    }

    // Other methods for user profile management
};

// Post class to represent a post in the Instagram Clone
class Post {
private:
    std::string imageUrl;
    std::string caption;
    std::vector<std::string> comments;
    std::vector<User> likes;

public:
    Post(std::string imageUrl, std::string caption)
        : imageUrl(imageUrl), caption(caption) {}

    void addComment(std::string comment) {
        comments.push_back(comment);
    }

    void addLike(User user) {
        likes.push_back(user);
    }

    // Other methods for managing post interactions
};

// Database class to store users, posts, and other data
class Database {
private:
    std::unordered_map<std::string, User> users;
    std::vector<Post> posts;

public:
    void addUser(User user) {
        users[user.username] = user;
    }

    void addPost(Post post) {
        posts.push_back(post);
    }

    // Other methods for database operations
};

int main() {
    // Creating users
    User user1("alice", "password123", "Bio of Alice");
    User user2("bob", "password456", "Bio of Bob");

    // Creating posts
    Post post1("image1.jpg", "Caption of Post 1");
    Post post2("image2.jpg", "Caption of Post 2");

    // Creating a database
    Database db;
    db.addUser(user1);
    db.addUser(user2);
    db.addPost(post1);
    db.addPost(post2);

    // Simulated interactions between users and posts

    return 0;
}