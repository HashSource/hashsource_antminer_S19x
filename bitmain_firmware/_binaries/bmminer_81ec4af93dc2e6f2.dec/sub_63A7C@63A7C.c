unsigned int sub_63A7C()
{
  unsigned __int8 v2[32]; // [sp+Ch] [bp-840h] BYREF
  char v3[2048]; // [sp+2Ch] [bp-820h] BYREF
  float v4; // [sp+82Ch] [bp-20h]
  int v5; // [sp+830h] [bp-1Ch] BYREF
  __int16 v6; // [sp+834h] [bp-18h]
  __int16 v8; // [sp+83Eh] [bp-Eh]
  int v9; // [sp+840h] [bp-Ch]
  int i; // [sp+844h] [bp-8h]

  v9 = 0;
  if ( !sub_62FF4() )
    return 0;
  v5 = 67414613;
  v6 = 1028;
  memset(v2, 0, sizeof(v2));
  v8 = 0;
  if ( sub_62DA0(dword_531538, (unsigned __int8 *)&v5, 6u, v2, 0xAu) )
  {
    strcpy(v3, "Get power dc_volt value failed\n");
    sub_3AF5C(3, v3, 0, (int)v3);
    return 0;
  }
  else
  {
    for ( i = 0; i <= 3; ++i )
      *((_BYTE *)&v4 + i) = v2[i + 4];
    return (unsigned int)((float)(v4 * 100.0) + 0.00001);
  }
}
