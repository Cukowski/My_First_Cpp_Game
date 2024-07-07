internal void
simulate_game(Input* input) {
	clear_screen(0xff5500);
	if (input->buttons[BUTTON_UP].is_down)
		draw_rect(0, 0, 10, 10, 0x00ff22);
	draw_rect(30, 30, 5, 5, 0x6256AF);
	draw_rect(-20, 20, 8, 3, 0x29AB43);
}