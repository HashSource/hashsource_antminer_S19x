int __fastcall sub_6D2D8(int a1, __int16 a2, int a3)
{
  char v8[2048]; // [sp+10h] [bp-814h] BYREF
  void *ptr; // [sp+810h] [bp-14h]
  int v10; // [sp+814h] [bp-10h]
  _DWORD *v11; // [sp+818h] [bp-Ch]
  int i; // [sp+81Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_536944) )
  {
    strcpy(v8, "failed to i2c lock\n");
    sub_3B6AC(0, v8, 0, (int)v8);
    return -4;
  }
  else
  {
    v11 = sub_59890(dword_53695C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v11)(v11); i; i = ((int (__fastcall *)(_DWORD *))*v11)(v11) )
    {
      v10 = v11[5];
      if ( a1 == ***(_DWORD ***)(v10 + 16) )
      {
        ptr = (void *)((int (__fastcall *)(int))v11[2])(i);
        if ( a2 == 1795 )
        {
          *((_DWORD *)ptr + 2) = a3;
          ((void (__fastcall *)(_DWORD *, void *, int))v11[1])(v11, ptr, 268);
          free(ptr);
        }
        break;
      }
    }
    sub_59914(v11);
    pthread_mutex_unlock(&stru_536944);
    return 0;
  }
}
