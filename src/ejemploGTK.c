#include <stdio.h>
#include <gtk-2.0/gtk/gtk.h>

int main (int argc, char *argv[])  {
	GtkWidget *ventana;
	GtkWidget *boton;
	GtkWidget *boton2;
	gtk_init(&argc, &argv);

	ventana = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	boton = gtk_button_new_with_label ("Botón1");
	boton2 = gtk_button_new_with_label ("Botón2");

	gtk_container_add (GTK_CONTAINER (ventana), boton);
	gtk_container_add (GTK_CONTAINER (ventana), boton2);
	
	gtk_widget_show (boton);
	gtk_widget_show (boton2);

	gtk_widget_show (ventana);
	gtk_main();
	return 0;
}
