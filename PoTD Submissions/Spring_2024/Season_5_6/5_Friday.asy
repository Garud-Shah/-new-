size(5inch);
pair NOW = (0, 0);
pair NEXT;
int[] intlist = {180, 168, 108, 108, 168};
for (int i=0; i<5; ++i){
    NEXT = dir(180 - intlist[i]) + NOW;
    draw(NOW -- NEXT);
}