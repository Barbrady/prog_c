#include <stdio.h>
#include <gtk/gtk.h>

int main (int argc, char *argv[])  {
	GtkWidget *ventana;
	GtkWidget *boton;
	
		
	gtk_init (&argc, &argv);
	
	ventana = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	boton = gtk_button_new_with_label("Botón.");
	gtk_container_add ((GtkContainer *) ventana, boton);
	gtk_widget_show (ventana) ;
	gtk_widget_show (boton);
	gtk_main();
}
