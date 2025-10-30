int __fastcall sub_9FE30(int a1, const char **a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // r8
  int v8; // r3
  int v9; // r7
  int v11; // r0
  const char *v12; // r8
  int v13; // r0
  bool v14; // zf
  const char *v15; // r6
  size_t v16; // r8
  int v17; // r0
  int v18; // r0
  unsigned int v19; // r3
  const char *v20; // r8
  int v21; // r0
  bool v22; // zf

  if ( !a1 )
    return 0;
  switch ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a1 + 32) >> 3)) )
  {
    case 2:
    case 7:
    case 0xD:
    case 0xE:
      v11 = sub_338BD4(*(_DWORD *)a1, "___XR");
      if ( !v11 )
        return 0;
      switch ( *(_BYTE *)(v11 + 5) )
      {
        case 'E':
          v12 = (const char *)(v11 + 7);
          v9 = 2;
          break;
        case 'P':
          v12 = (const char *)(v11 + 7);
          v9 = 3;
          break;
        case 'S':
          v12 = (const char *)(v11 + 7);
          v9 = 4;
          break;
        case '_':
          v12 = (const char *)(v11 + 6);
          v9 = 1;
          break;
        default:
          return 0;
      }
      if ( a2 )
        *a2 = v12;
      v13 = sub_338BD4(v12, "___XE");
      v14 = v12 == (const char *)v13;
      if ( v12 != (const char *)v13 )
        v14 = v13 == 0;
      v15 = (const char *)v13;
      if ( v14 )
        return 0;
      if ( a3 )
      {
        v16 = strlen(v12);
        *a3 = v16 - strlen(v15);
      }
      if ( a4 )
        *a4 = v15 + 5;
      return v9;
    case 8:
      v7 = *(_DWORD *)(a1 + 24);
      if ( !v7 )
        return 0;
      v8 = *(_DWORD *)(v7 + 24);
      if ( *(_BYTE *)v8 != 5 )
        return 0;
      if ( *(_WORD *)(v8 + 4) != 1 )
        return 0;
      v17 = sub_170CC4(*(_DWORD *)(a1 + 24));
      if ( !v17 )
        return 0;
      v18 = sub_338BD4(v17, "___XR");
      if ( !v18 )
        return 0;
      v19 = *(unsigned __int8 *)(v18 + 5);
      if ( v19 == 80 )
      {
        v9 = 3;
        goto LABEL_32;
      }
      if ( v19 > 0x50 )
      {
        if ( v19 == 83 )
        {
          v9 = 4;
          goto LABEL_32;
        }
        if ( v19 != 95 )
          return 0;
LABEL_45:
        v9 = 1;
        goto LABEL_32;
      }
      if ( !*(_BYTE *)(v18 + 5) )
        goto LABEL_45;
      if ( v19 != 69 )
        return 0;
      v9 = 2;
LABEL_32:
      v20 = *(const char **)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + 16);
      if ( !v20 )
        return 0;
      if ( a2 )
        *a2 = v20;
      v21 = sub_338BD4(v20, "___XE");
      if ( a4 )
        *a4 = v21 + 5;
      v22 = v20 == (const char *)v21;
      if ( v20 != (const char *)v21 )
        v22 = v21 == 0;
      if ( v22 )
        return 0;
      if ( a3 )
        *a3 = v21 - (_DWORD)v20;
      return v9;
    default:
      return 0;
  }
}
