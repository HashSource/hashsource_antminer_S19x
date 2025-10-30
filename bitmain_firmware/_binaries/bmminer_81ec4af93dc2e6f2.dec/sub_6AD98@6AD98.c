int __fastcall sub_6AD98(int a1)
{
  int result; // r0
  _DWORD v2[2]; // [sp+4h] [bp-818h] BYREF
  char v3[2048]; // [sp+Ch] [bp-810h] BYREF
  _DWORD *v4; // [sp+80Ch] [bp-10h]
  int i; // [sp+810h] [bp-Ch]
  int v6; // [sp+814h] [bp-8h]

  v2[0] = a1;
  v6 = 0;
  if ( pthread_mutex_lock(&stru_531B04) )
  {
    strcpy(v3, "failed to i2c lock\n");
    return sub_3AF5C(0, v3, 0, (int)v3);
  }
  else
  {
    if ( sub_584EC((_DWORD *)dword_531B1C, (int)v2) )
    {
      sub_58558((_DWORD *)dword_531B1C, (int)v2);
    }
    else
    {
      snprintf(v3, 0x800u, "ctx(%d) is not inited\n", v2[0]);
      sub_3AF5C(1, v3, 0, (int)v3);
    }
    v4 = sub_588A0(dword_531B1C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v4)(v4); i; i = ((int (__fastcall *)(_DWORD *))*v4)(v4) )
      ++v6;
    sub_58924(v4);
    result = pthread_mutex_unlock(&stru_531B04);
    if ( !v6 )
    {
      dword_531B20 = 0;
      result = sub_586A8((_DWORD *)dword_531B1C);
      dword_531B1C = 0;
    }
  }
  return result;
}
