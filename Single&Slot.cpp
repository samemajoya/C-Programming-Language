
int main() {
    Button button;
    QObject::connect(&button, SIGNAL(clicked()), &button, SLOT(handleClick()));

    // Simulate a button click
    emit button.clicked();

    return 0;
}
