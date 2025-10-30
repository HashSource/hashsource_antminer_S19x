int __fastcall sub_6BEC8(int a1, int a2)
{
  char v6[2048]; // [sp+8h] [bp-81Ch] BYREF
  _DWORD v7[2]; // [sp+808h] [bp-1Ch] BYREF
  void *ptr; // [sp+810h] [bp-14h]
  int v9; // [sp+814h] [bp-10h]
  _DWORD *v10; // [sp+818h] [bp-Ch]
  int i; // [sp+81Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_531B04) )
  {
    strcpy(v6, "failed to i2c lock\n");
    sub_3AF5C(0, v6, 0, (int)v6);
    return -4;
  }
  else
  {
    v10 = sub_588A0(dword_531B1C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v10)(v10); i; i = ((int (__fastcall *)(_DWORD *))*v10)(v10) )
    {
      v9 = v10[5];
      if ( ***(_DWORD ***)(v9 + 16) == a1 )
      {
        ptr = (void *)((int (__fastcall *)(int))v10[2])(i);
        v7[0] = a2;
        v7[1] = *((_DWORD *)ptr + 1);
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v10[1])(v10, v7, 8);
        free(ptr);
        break;
      }
    }
    sub_58924(v10);
    pthread_mutex_unlock(&stru_531B04);
    return 0;
  }
}
