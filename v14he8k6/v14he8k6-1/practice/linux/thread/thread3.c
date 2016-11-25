pthread_t tid1,tid2;
pthread_mutex_t m1,m2;
  void *f1(void *p)
   {



   }
   void *f2(void *p)
   {


    }
main()
{
pthread_t tid1,tid2;
pthread_mutex_t m1,m2;

  pthread_create(&tid1,NULL,f1,NULL);
  pthread_create(&tid2,NULL,f2,NULL);

   pthread_join(tid1,NULL);
   pthread_join(tid2,NULL);



}
