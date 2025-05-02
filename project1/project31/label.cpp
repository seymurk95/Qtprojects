#include "label.h"
#include<QVBoxLayout>
#include<QFont>
Label::Label(QWidget *parent):QWidget(parent) {
    QString text = R"(

Lorem ipsum dolor sit amet, consectetur adipiscing elit. In fermentum felis porta orci feugiat feugiat.
 Nam scelerisque sed augue quis sollicitudin. Nulla facilisis turpis vitae augue consequat sodales.
Aliquam vitae libero id leo semper blandit.
Donec sagittis felis tristique purus iaculis placerat.
Pellentesque at quam sit amet est suscipit ultricies in in ex. Proin facilisis finibus condimentum.
Morbi vel risus consequat, vestibulum lorem at, auctor elit. Sed aliquet ligula at consectetur pretium.
Etiam euismod venenatis ullamcorper. Phasellus fermentum ante nisl, non pretium urna faucibus in.
Donec porttitor scelerisque consequat. Pellentesque ultrices molestie iaculis.

Nunc at mauris laoreet, varius odio ut, mattis leo. Nam pulvinar lacus non leo varius accumsan.
Integer mauris arcu, aliquet et purus in, interdum porttitor orci.
Maecenas in velit eros.
Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Ut molestie massa diam, at lacinia urna consequat vel.
Lorem ipsum dolor sit amet, consectetur adipiscing elit.

Nulla dapibus dignissim leo nec rutrum. Duis tristique dui ut bibendum consequat.
 Nulla facilisi.
Sed in enim mauris. In hac habitasse platea dictumst.
 Mauris vel massa ut eros tincidunt ornare vel quis magna.
Vestibulum pulvinar suscipit sodales. Nam quis suscipit sapien.
Phasellus vel molestie ante. Maecenas rutrum lectus vel enim luctus, vitae consequat nisi vehicula.

Praesent vel leo auctor, efficitur odio et, accumsan neque.
Quisque odio tortor, ullamcorper non lectus vel, vehicula convallis turpis.
Quisque vitae tortor eu lorem dictum iaculis in ut mi. Ut diam massa, pulvinar non pharetra ut, volutpat eu tortor.
Mauris ante nunc, posuere eu varius sit amet, finibus et orci.
Quisque venenatis, dolor non dignissim efficitur, libero enim volutpat lacus, eget scelerisque massa libero sed enim.
Aenean et posuere nulla, quis facilisis tortor. Etiam in augue ac erat semper tristique mollis nec ante.
Nulla turpis odio, efficitur ut ultrices non, tincidunt egestas velit. Ut ullamcorper iaculis ornare.
Nam egestas viverra feugiat.
Aliquam ac lectus vitae dolor venenatis rutrum eget ut ante.

Pellentesque at tortor non quam aliquet dignissim. Integer dui ipsum, rutrum in purus a, vulputate pretium sapien.
Morbi hendrerit imperdiet arcu id hendrerit.
Suspendisse efficitur, magna id fringilla bibendum, diam tellus sagittis mauris, eget laoreet erat elit a felis.
 Aliquam tincidunt, magna eget hendrerit bibendum, ipsum turpis pulvinar neque, vitae bibendum risus velit in elit.
 Aenean pretium, urna at congue interdum, massa purus ornare leo, in sagittis eros enim id lorem.
 Curabitur sollicitudin tellus et dolor interdum bibendum. Pellentesque vehicula eleifend vehicula.
Etiam lobortis risus mi, ac dignissim risus euismod aliquet. Nulla ex est, rutrum in efficitur non, sodales sed lectus. )";
    label = new QLabel(text,this);
    label -> setFont(QFont("Purisa",10));
    auto *vbox = new QVBoxLayout();
    vbox -> addWidget(label);
    setLayout(vbox);

}
