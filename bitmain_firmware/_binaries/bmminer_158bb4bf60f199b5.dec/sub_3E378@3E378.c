int __fastcall sub_3E378(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  int v5; // t1
  int v6; // r3

  if ( pthread_rwlock_rdlock(&stru_24638C) )
    sub_3E12C("ascdevice", 1395);
  if ( dword_245140 <= 0 )
  {
LABEL_11:
    if ( pthread_rwlock_unlock(&stru_24638C) )
      sub_3E258("ascdevice", 1403);
    off_9E444();
    return -1;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = dword_242FEC - 4;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      v6 = **(_DWORD **)(v5 + 4);
      if ( v6 == 2 || v6 == 3 )
        ++v3;
      if ( v3 == a1 + 1 )
        break;
      if ( dword_245140 == ++v2 )
        goto LABEL_11;
    }
    if ( pthread_rwlock_unlock(&stru_24638C) )
      sub_3E258("ascdevice", 1408);
    off_9E444();
    return v2;
  }
}
