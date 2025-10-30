int __fastcall sub_177EC(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  int v5; // t1
  int v6; // r3

  if ( pthread_rwlock_rdlock(&stru_7680C) )
    sub_175A0("ascdevice", 1395);
  if ( dword_755C0 <= 0 )
  {
LABEL_11:
    if ( pthread_rwlock_unlock(&stru_7680C) )
      sub_176CC("ascdevice", 1403);
    off_67ED8();
    return -1;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = dword_7346C - 4;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      v6 = **(_DWORD **)(v5 + 4);
      if ( v6 == 2 || v6 == 3 )
        ++v3;
      if ( v3 == a1 + 1 )
        break;
      if ( dword_755C0 == ++v2 )
        goto LABEL_11;
    }
    if ( pthread_rwlock_unlock(&stru_7680C) )
      sub_176CC("ascdevice", 1408);
    off_67ED8();
    return v2;
  }
}
