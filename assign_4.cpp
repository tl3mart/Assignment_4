/*
  Name:Thomas Martinez. Date: Oct 17, 2022. SYDE 121.

    Lab room: DC 1350
  Program name = "Shape Maker"
 */
/*
Purpose: Output a diamond or triangle or upside down triangle or half-diamond based on user input as well as the type
 of characters that make the shape and the size of it.
 */
#include<iostream>
using namespace std;
//function headers
char get_char (int shape);
void draw_triangle(char character);
void draw_diamond(char character);
void draw_flipped_triangle(char character);
void draw_half_diamond(char character);
int main( )
{
    int shape;
    char character;


    cout << "What shape would you like to create? [1-diamond, 2-triangle, 3-upside down triangle, 4-half-diamond]\n";
    cin >> shape;
//Determining which shape user has inputted.
    if (shape == 1){
        cout << " You have chosen a diamond shape\n";
        character = get_char(shape);
        draw_diamond(character);

    }
    else if (shape == 2){
        cout << " You have chosen a triangle shape\n";
        character = get_char(shape);
        draw_triangle(character);


    }
    else if (shape == 3){
        cout << " You have chosen a upside down triangle\n";
        character = get_char(shape);
        draw_flipped_triangle(character);
    }
    else if (shape == 4){
        cout << " You have chosen a half-diamond\n";
        character = get_char(shape);

        draw_half_diamond(character);

    }
    else {
        cout << "Incorrect input!\n";

    }


    return 0;
}

//Function definitions
char get_char (int shape)
{
    // determining which character to build shape
    char character;
    cout << "This is because you have chosen choice " << shape << "!\n";
    cout << "Now that we know the shape, what character would you like us to build the shape out of(ex, !, 1, t)?\n";
    cin >> character;

    return (character);

}
void draw_triangle(char character)
{
    int space, i, j, triangle_size;
    cout << "What is the size of your triangle (how many rows)?\n";
    cin >> triangle_size;
    space = triangle_size-1;

    for( i=1; i<=triangle_size; i++) {
        for (j = 1; j <= space; j++) {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << character;
        }
        space--;
        cout << "\n";

    }
    cout << "\n\n";
    }
    void draw_diamond (char character)
    {
        int space, i, j, diamond_size;
        cout << "What is the size of your diamond?(how many rows for 1/2 the diamond)\n";
        cin >> diamond_size;
        space = diamond_size-1;
        for( i=1; i<=diamond_size; i++)
        {
            for(j=1; j<=space; j++)
                cout<<" ";
            space--;
            for(j=1; j<=(2*i-1); j++)
                cout<< character;
            cout<<endl;
        }
        space = 1;
        for(i=1; i<=(diamond_size-1); i++) {
            for (j = 1; j <= space; j++) {
                cout << " ";
            }
            for (j = 1; j <= (2 * (diamond_size - i) - 1); j++){
                cout << character;}
            cout << "\n";
            space++;


        }
    }
void draw_flipped_triangle(char character) {
    int space, i, j, upside_triangle_size;
    cout << "What is the size of your upside down triangle(how many rows)?\n";
    cin >> upside_triangle_size;
    space = upside_triangle_size - 1;

    for (i = 1; i <= (upside_triangle_size + 1); i++) {
        for (j = 0; j <= space; j++) {
            cout << " ";
        }

        for (j = 0; j <= 2 * (upside_triangle_size - i); j++) {
        cout << character;
    }
        cout << "\n";
        space++;


    }
}
void draw_half_diamond(char character)
{
    int i, j, a, k, diamond_size, stars, stars_1;
        cout << "What is the size of your diamond(largest row)?\n";
        cin >> diamond_size;
         stars = diamond_size;
         stars_1 = 1;
    for (a=1; a<= diamond_size; a++) {

        for (k=1; k <= stars_1; k++){
            cout << character;
        }
        cout << "\n";
        stars_1++;
    }
        for (i = 1; i <= diamond_size; i++) {

            for (j = stars-1; j > 0; j--) {
                cout << character;
            }
            cout << "\n";
            stars--;
        }


}