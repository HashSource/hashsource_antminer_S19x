int __fastcall sub_68C68(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v4; // r3
  char v9[2048]; // [sp+14h] [bp-850h] BYREF
  unsigned __int8 s[52]; // [sp+814h] [bp-50h] BYREF
  int v11; // [sp+848h] [bp-1Ch] BYREF
  unsigned __int8 v12; // [sp+84Ch] [bp-18h]
  unsigned __int8 v13; // [sp+84Dh] [bp-17h]
  __int16 v14; // [sp+84Eh] [bp-16h]
  __int16 v15; // [sp+850h] [bp-14h]
  char v16; // [sp+852h] [bp-12h]
  char v17; // [sp+853h] [bp-11h]
  int v18; // [sp+854h] [bp-10h]
  unsigned __int8 i; // [sp+85Bh] [bp-9h]
  int v20; // [sp+85Ch] [bp-8h]

  v20 = 0;
  v17 = 6;
  v16 = 6;
  v11 = 101100117;
  memset(s, 0, 0x32u);
  v18 = 5;
  v15 = a1 + 12 + a3;
  v12 = a1;
  v13 = a3;
  v14 = v15;
  i = 8;
  if ( dword_53153C || (v20 = sub_6731C(), v20 >= 0) )
  {
    if ( sub_62C28(dword_531538, (unsigned __int8 *)&v11, 8u, s, a3 + 7) )
    {
      strcpy(v9, "set DA conversion N failed\n");
      sub_3AF5C(0, v9, 0, (int)v9);
      return -2147482880;
    }
    else
    {
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        v4 = v18++;
        *(_BYTE *)(a2 + i) = s[v4];
      }
      return v20;
    }
  }
  else
  {
    snprintf(v9, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
    sub_3AF5C(0, v9, 0, (int)v9);
    return v20;
  }
}
