_BYTE *__fastcall sub_6D154(int a1, int a2)
{
  _BYTE *v4; // r9
  int v5; // r4
  const char *v7; // r6
  const char *v8; // r4
  const char *v9; // r8
  const char *v10; // r0
  const char *v11; // r4
  const char *v12; // r0
  const char *v13; // r8
  const char *v14; // r4
  const char *v15; // r0
  int v16; // r5
  size_t v17; // r4
  const char *v18; // r0

  v4 = &lib_stringbuf[128 * lib_nextbuf];
  v5 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v4, 0, 0x80u);
  lib_nextbuf = v5;
  switch ( a1 )
  {
    case 2:
      v13 = sub_6CCB0(BYTE1(a2), ", ", &off_B4C48, 5);
      v14 = sub_6CE6C((a2 >> 8) & 7, &dword_B4F90);
      if ( (unsigned __int8)a2 >> 4 )
        v15 = sub_6CF4C((unsigned __int8)a2 >> 4);
      else
        v15 = "no events";
      sub_6C054((int)v4, 0x80u, "%s, %s, %s", v13, v14, v15);
      v16 = a2 & 0xF;
      if ( v16 )
      {
        v17 = strlen(v4);
        v18 = sub_6CE6C(v16, &dword_B4FFC);
        sub_6C054((int)&v4[v17], 128 - v17, ", %s", v18);
      }
      break;
    case 3:
      if ( (unsigned __int8)a2 >> 4 )
        v11 = sub_6CF4C((unsigned __int8)a2 >> 4);
      else
        v11 = "no events";
      v12 = sub_6CE6C(a2 & 0xF, &dword_B50BC);
      sub_6C054((int)v4, 0x80u, "%s, %s", v11, v12);
      break;
    case 1:
      v7 = sub_6CE6C((unsigned __int16)a2 >> 14, &dword_B4E04);
      v8 = sub_6CE6C(((unsigned int)a2 >> 8) & 0x3F, &dword_B4E40);
      if ( (unsigned __int8)a2 >> 4 )
        v9 = sub_6CF4C((unsigned __int8)a2 >> 4);
      else
        v9 = "no events";
      v10 = sub_6CE6C(a2 & 0xF, &dword_B4EC4);
      sub_6C054((int)v4, 0x80u, "%s, %s, %s, %s", v7, v8, v9, v10);
      break;
  }
  return v4;
}
