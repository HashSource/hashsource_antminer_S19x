int __fastcall sub_6BD28(int a1, __int16 a2, int a3)
{
  char v8[2048]; // [sp+10h] [bp-81Ch] BYREF
  _DWORD v9[2]; // [sp+810h] [bp-1Ch] BYREF
  void *ptr; // [sp+818h] [bp-14h]
  int v11; // [sp+81Ch] [bp-10h]
  _DWORD *v12; // [sp+820h] [bp-Ch]
  int i; // [sp+824h] [bp-8h]

  if ( pthread_mutex_lock(&stru_531B04) )
  {
    strcpy(v8, "failed to i2c lock\n");
    sub_3AF5C(0, v8, 0, (int)v8);
    return -4;
  }
  else
  {
    v12 = sub_588A0(dword_531B1C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v12)(v12); i; i = ((int (__fastcall *)(_DWORD *))*v12)(v12) )
    {
      v11 = v12[5];
      if ( ***(_DWORD ***)(v11 + 16) == a1 )
      {
        ptr = (void *)((int (__fastcall *)(int))v12[2])(i);
        if ( a2 == 1795 )
        {
          v9[0] = *(_DWORD *)ptr;
          v9[1] = a3;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v12[1])(v12, v9, 8);
          free(ptr);
        }
        break;
      }
    }
    sub_58924(v12);
    pthread_mutex_unlock(&stru_531B04);
    return 0;
  }
}
