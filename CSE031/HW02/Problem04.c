/* a */
#define MAX_NAME_LEN 128
typedef struct {
    char name[MAX_NAME_LEN];
    unsigned long sid;
} Student;


/* return the nameof student s */
const char* getName(const Student* s) {
    return s->name;
}


/* set the name of student s */
void setName(Student* s, const char* name) {
/* fill me in */
    strcpy(s->name, name);

}


/* return the SID of student s */
unsigned long getStudentID(const Student* s) {
/* fill me in */
    return s->sid;

}


/* set the SID of student s */
void setStudentID(Student* s, unsigned long sid) {
/* fill me in */
    //strcpy(s->sid, sid);
    s->sid = sid;

}

/* b */
b = 'The function return the address of s, but it is already being deleted after the function finished its operation.'