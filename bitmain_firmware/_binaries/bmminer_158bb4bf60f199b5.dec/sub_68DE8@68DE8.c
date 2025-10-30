int __fastcall sub_68DE8(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = pthread_mutex_lock(&stru_1B11C0);
  if ( v2 )
  {
    strcpy(v6, "failed to api lock\n");
    sub_47AB4(0, v6, 0);
    return -1;
  }
  else
  {
    v3 = (int *)&off_1B11DC;
    while ( 1 )
    {
      v4 = *v3++;
      if ( v4 == a1 )
        break;
      if ( ++v2 == 5 )
      {
        strcpy(v6, "listener not registered before\n");
        sub_47AB4(1, v6, 0);
        goto LABEL_7;
      }
    }
    dword_1B11BC[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_1B11C0);
    return 0;
  }
}
