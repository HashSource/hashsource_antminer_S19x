int __fastcall sub_68CD8(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  int v7; // r0
  int v8; // r0
  char v9[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = pthread_mutex_lock(&stru_1B11C0);
  if ( v2 )
  {
    v2 = -1;
    strcpy(v9, "failed to api lock\n");
    sub_47AB4(0, v9, 0);
  }
  else
  {
    if ( !dword_1B11F8 )
    {
      v7 = sub_68848(0x100u);
      sub_669D0(v7, (unsigned int)sub_68988);
      v8 = sub_68848(0x101u);
      sub_669D0(v8, (unsigned int)sub_68988);
      dword_1B11F8 = 1;
    }
    v3 = &off_1B11DC;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        v2 = -2;
        strcpy(v9, "no more listener available\n");
        sub_47AB4(0, v9, 0);
        goto LABEL_8;
      }
    }
    dword_1B11BC[v4 + 8] = a1;
LABEL_8:
    pthread_mutex_unlock(&stru_1B11C0);
  }
  return v2;
}
