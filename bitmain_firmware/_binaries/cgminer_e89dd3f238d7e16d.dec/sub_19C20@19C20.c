int __fastcall sub_19C20(const char *a1, int a2, char *a3, _DWORD *a4)
{
  const char *v4; // r0
  char v9[12]; // [sp+10h] [bp-90Ch] BYREF
  _BYTE v10[252]; // [sp+810h] [bp-10Ch] BYREF
  _DWORD *v11; // [sp+90Ch] [bp-10h]
  _DWORD *v12; // [sp+910h] [bp-Ch]
  int v13; // [sp+914h] [bp-8h]

  v13 = 0;
  v12 = 0;
  v11 = 0;
  v12 = (_DWORD *)sub_639D0(a1, 0, v10);
  if ( v12 && !*v12 )
  {
    v11 = (_DWORD *)sub_652F0(v12, "command");
    if ( v11 && *v11 == 2 )
    {
      v4 = (const char *)sub_66AE0(v11);
      snprintf(a3, 0x10u, "%s", v4);
      v11 = (_DWORD *)sub_652F0(v12, "new_api");
      *a4 = !v11 || *v11 != 5;
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v9, 0x800u, "%s error: format error about command\n", "parse_recv_buf");
        sub_1DB6C(3, v9, 0);
      }
      v13 = -2147483641;
    }
    sub_12B40((int)v12);
  }
  else
  {
    *a4 = 2;
    snprintf(a3, 0x10u, "%s", a1);
  }
  return v13;
}
