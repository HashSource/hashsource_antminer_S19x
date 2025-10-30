int sub_5750C()
{
  int v1; // r0
  char v3[2051]; // [sp+0h] [bp-80Ch] BYREF
  char v4; // [sp+803h] [bp-9h] BYREF
  _BOOL4 v5; // [sp+804h] [bp-8h]

  v5 = 1;
  if ( pthread_mutex_lock(&stru_5313A4) )
  {
    strcpy(v3, "failed to api lock\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return -1;
  }
  else
  {
    v1 = sub_57EB0();
    sub_53D88(v1, &v4);
    v5 = v4 != 0;
    pthread_mutex_unlock(&stru_5313A4);
    return v5;
  }
}
