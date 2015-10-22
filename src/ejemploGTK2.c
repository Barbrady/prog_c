#include <gtk/gtk.h>

int main (int argc, char * argv[])
{
	GtkWidget * ventana;
	GtkWidget * boton;
	GtkWidget * etiqueta;
				
	gtk_init(&argc, &argv);

	ventana = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	boton = gtk_button_new();
	etiqueta = gtk_label_new("Etiqueta 1");
	gtk_window_set_title((GtkWindow *) ventana, "Ventana con boton");
	gtk_container_add ((GtkContainer *) ventana, boton);
	gtk_container_add ((GtkContainer *) boton, etiqueta);
									
	gtk_widget_show(ventana);
	gtk_widget_show(boton);
	gtk_widget_show(etiqueta);
	gtk_main();

}
