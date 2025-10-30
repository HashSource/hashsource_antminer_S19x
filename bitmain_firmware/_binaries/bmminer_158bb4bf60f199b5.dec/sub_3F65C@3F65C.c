int __fastcall sub_3F65C(unsigned int *a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r1
  int *v9; // r2
  int v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r7
  const char *v14; // r1
  const char *v15; // r0
  const char *v16; // r0
  char **v17; // r0
  int result; // r0
  int v19; // r4
  const char *v20; // r0
  const char *v21; // r0
  int v22; // r0
  int v23; // r0
  char *v24; // r3
  int v25; // [sp+Ch] [bp-2010h] BYREF
  char v26[4]; // [sp+10h] [bp-200Ch] BYREF
  int v27; // [sp+14h] [bp-2008h] BYREF
  char s[8168]; // [sp+18h] [bp-2004h] BYREF

  v25 = a2;
  if ( a5 )
    sub_3C770(a1, "{\"STATUS\":[");
  v8 = dword_9D80C[0];
  if ( dword_9D80C[0] == 4 )
  {
LABEL_9:
    v11 = sub_3F3D8(0, "STATUS", 1, "F", 0);
    v12 = sub_3F3D8((int)v11, "When", 16, (const char *)&dword_1AEB98, 0);
    v27 = -1;
    v13 = sub_3F3D8((int)v12, "Code", 6, (const char *)&v27, 0);
    sprintf(s, "%d", v25);
    LOWORD(v14) = (unsigned __int16)"Msg";
    v15 = v13;
    goto LABEL_10;
  }
  if ( dword_9D810 != v25 )
  {
    v9 = dword_9D80C;
    v10 = 0;
    while ( 1 )
    {
      v8 = v9[4];
      ++v10;
      v9 += 4;
      if ( v8 == 4 )
        goto LABEL_9;
      if ( v9[1] == v25 )
        goto LABEL_13;
    }
  }
  v10 = 0;
LABEL_13:
  switch ( v8 )
  {
    case 2:
      v26[0] = 73;
      break;
    case 3:
      v26[0] = 83;
      break;
    case 1:
      v26[0] = 87;
      break;
    default:
      v26[0] = 69;
      break;
  }
  v19 = 4 * v10;
  v26[1] = 0;
  switch ( dword_9D80C[4 * v10 + 2] )
  {
    case 0:
    case 1:
    case 2:
    case 14:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], a3);
      break;
    case 4:
      v22 = sub_3E2BC();
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], a3, v22 - 1);
      break;
    case 5:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], dword_242F4C);
      break;
    case 6:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], a3, dword_242F4C - 1);
      break;
    case 7:
      v23 = sub_3E2BC();
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], v23);
      break;
    case 8:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], "command");
      break;
    case 9:
      snprintf(
        s,
        0x1FFFu,
        (const char *)dword_9D80C[v19 + 3],
        a3,
        *(_DWORD *)(*(_DWORD *)(dword_244048 + 4 * a3) + 164));
      break;
    case 10:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], a4);
      break;
    case 11:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], a3, a4);
      break;
    case 12:
      v24 = "false";
      if ( a3 )
        v24 = "true";
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], v24);
      break;
    case 13:
      snprintf(s, 0x1FFFu, (const char *)dword_9D80C[v19 + 3], a4, a3);
      break;
    default:
      strcpy(s, (const char *)dword_9D80C[v19 + 3]);
      break;
  }
  v20 = sub_3F3D8(0, "STATUS", 1, v26, 0);
  v21 = sub_3F3D8((int)v20, "When", 16, (const char *)&dword_1AEB98, 0);
  v15 = sub_3F3D8((int)v21, "Code", 6, (const char *)&v25, 0);
  LOWORD(v14) = -908;
LABEL_10:
  HIWORD(v14) = (unsigned int)"Msg" >> 16;
  v16 = sub_3F3D8((int)v15, v14, 0, s, 0);
  v17 = (char **)sub_3F3D8((int)v16, "Description", 0, off_9EE60, 0);
  result = sub_3E88C(a1, v17, a5, 0);
  if ( a5 )
    return sub_3C770(a1, (char *)&word_7A848);
  return result;
}
