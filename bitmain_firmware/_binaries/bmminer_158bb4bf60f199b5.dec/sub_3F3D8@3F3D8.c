const char *__fastcall sub_3F3D8(int a1, const char *a2, int a3, const char *a4, char a5)
{
  char *v9; // r4
  int v10; // r3
  const char *result; // r0
  _DWORD *v12; // r0
  int v13; // r3
  _DWORD *v14; // r0
  int v15; // r1
  _DWORD *v16; // r2
  int v17; // r0
  _QWORD *v18; // r0
  __int64 v19; // r2
  _WORD *v20; // r0
  __int16 v21; // r3
  _BYTE *v22; // r0
  char v23; // r3
  _DWORD *v24; // r0
  int v25; // r3
  _BYTE *v26; // r0
  char v27; // r3
  size_t v28; // r5
  void *v29; // r0
  char v30[2052]; // [sp+0h] [bp-804h] BYREF

  v9 = (char *)malloc(0x18u);
  *((_DWORD *)v9 + 1) = _strdup(a2);
  if ( a1 )
    v10 = *(_DWORD *)(a1 + 16);
  else
    a2 = v9;
  if ( a1 )
  {
    *((_DWORD *)v9 + 5) = a1;
    a2 = (const char *)a1;
    *(_DWORD *)(a1 + 16) = v9;
    *((_DWORD *)v9 + 4) = v10;
  }
  *(_DWORD *)v9 = a3;
  if ( a1 )
    *(_DWORD *)(v10 + 20) = v9;
  else
    *((_DWORD *)v9 + 4) = v9;
  if ( !a1 )
    *((_DWORD *)v9 + 5) = v9;
  v9[12] = a5;
  if ( !a4 )
  {
    v9[12] = 0;
    a4 = "(null)";
    *(_DWORD *)v9 = 2;
LABEL_15:
    *((_DWORD *)v9 + 2) = a4;
    return a2;
  }
  if ( !a5 )
    goto LABEL_15;
  switch ( a3 )
  {
    case 0:
    case 1:
    case 2:
      v28 = strlen(a4) + 1;
      v29 = malloc(v28);
      *((_DWORD *)v9 + 2) = v29;
      memcpy(v29, a4, v28);
      return a2;
    case 3:
      v26 = malloc(4u);
      v27 = *a4;
      *((_DWORD *)v9 + 2) = v26;
      *v26 = v27;
      return a2;
    case 4:
    case 5:
      v20 = malloc(4u);
      v21 = *(_WORD *)a4;
      *((_DWORD *)v9 + 2) = v20;
      *v20 = v21;
      return a2;
    case 6:
    case 7:
    case 8:
    case 9:
    case 16:
      v12 = malloc(4u);
      v13 = *(_DWORD *)a4;
      *((_DWORD *)v9 + 2) = v12;
      *v12 = v13;
      result = a2;
      break;
    case 10:
    case 11:
      v18 = malloc(8u);
      v19 = *(_QWORD *)a4;
      *((_DWORD *)v9 + 2) = v18;
      *v18 = v19;
      return a2;
    case 12:
    case 13:
    case 15:
    case 17:
    case 18:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
      v14 = malloc(8u);
      v15 = *((_DWORD *)a4 + 1);
      v16 = v14;
      v17 = *(_DWORD *)a4;
      *((_DWORD *)v9 + 2) = v16;
      *v16 = v17;
      v16[1] = v15;
      return a2;
    case 14:
      v22 = malloc(1u);
      v23 = *a4;
      *((_DWORD *)v9 + 2) = v22;
      *v22 = v23;
      return a2;
    case 19:
    case 22:
    case 26:
      v24 = malloc(4u);
      v25 = *(_DWORD *)a4;
      *((_DWORD *)v9 + 2) = v24;
      *v24 = v25;
      return a2;
    default:
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
      {
        snprintf(v30, 0x800u, "API: unknown1 data type %d ignored", a3);
        sub_47AB4(3, v30, 0);
      }
      *((_DWORD *)v9 + 2) = "Unknown";
      *(_DWORD *)v9 = 1;
      v9[12] = 0;
      return a2;
  }
  return result;
}
