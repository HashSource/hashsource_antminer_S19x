int __fastcall sub_247640(int a1, _DWORD *a2)
{
  int v3; // r6
  unsigned int v4; // r3
  __int64 v5; // r6
  void *v6; // r8
  char *v7; // r9
  int v8; // r2
  _BYTE *v9; // r2
  char *v10; // r3
  int v11; // r6
  int result; // r0
  char *v13; // r1
  char *v14; // r3
  bool v15; // zf
  char *v16; // r1
  ssize_t v17; // r0
  int v18; // r0
  unsigned int v19; // r0
  int v20; // r1
  ssize_t v21; // r0
  int v22; // r0
  unsigned int v23; // r0
  unsigned __int16 v24; // r0
  char *v25; // r5
  char *v26; // r3
  bool v27; // zf
  char *v28; // r5
  unsigned __int16 v29; // [sp+6h] [bp-Eh] BYREF
  _DWORD buf[3]; // [sp+8h] [bp-Ch] BYREF

  switch ( a1 )
  {
    case 'M':
      v17 = sub_2464F8(buf, 8);
      v18 = sub_16F654(v17);
      v19 = ((int (__fastcall *)(int))loc_165BB8)(v18);
      buf[0] = sub_15C250((unsigned __int8 *)buf, 8, v19);
      buf[1] = v20;
      v21 = sub_2464F8(&v29, 2);
      v22 = sub_16F654(v21);
      v23 = ((int (__fastcall *)(int))loc_165BB8)(v22);
      v24 = sub_15C250((unsigned __int8 *)&v29, 2, v23);
      v25 = (char *)a2[1];
      v26 = (char *)a2[2];
      v29 = v24;
      if ( v25 == v26 )
      {
        v3 = (int)&v25[-*a2];
        v4 = v3 >> 3;
        if ( v3 >> 3 )
        {
          HIDWORD(v5) = 2 * v4;
          if ( v4 > 2 * v4 || HIDWORD(v5) > 0x1FFFFFFF )
          {
            HIDWORD(v5) = -8;
          }
          else
          {
            if ( !HIDWORD(v5) )
            {
              v6 = 0;
              goto LABEL_6;
            }
            HIDWORD(v5) = 16 * v4;
          }
        }
        else
        {
          HIDWORD(v5) = 8;
        }
        v6 = sub_9836C(HIDWORD(v5));
LABEL_6:
        v7 = (char *)*a2;
        if ( (char *)v6 + v3 )
        {
          v8 = v29;
          *(_DWORD *)((char *)v6 + v3) = buf[0];
          *(_DWORD *)((char *)v6 + v3 + 4) = v8;
        }
        if ( v7 != v25 )
          memmove(v6, v7, v25 - v7);
        v9 = (_BYTE *)a2[1];
        v10 = (char *)v6 + v25 - v7 + 8;
        v11 = v9 - v25;
        if ( v9 != v25 )
          v10 = (char *)memmove(v10, v25, v9 - v25);
        LODWORD(v5) = &v10[v11];
        if ( v7 )
          sub_339E64(v7);
        HIDWORD(v5) += v6;
        *a2 = v6;
        *(_QWORD *)(a2 + 1) = v5;
        return 0;
      }
      v27 = v25 == 0;
      v28 = v25 + 8;
      if ( !v27 )
      {
        v26 = (char *)buf[0];
        *((_DWORD *)v28 - 1) = v24;
      }
      result = 0;
      if ( !v27 )
        *((_DWORD *)v28 - 2) = v26;
      a2[1] = v28;
      return result;
    case 'R':
    case 'S':
      return 0;
    case 'V':
      sub_2464F8(buf, 4);
      v13 = (char *)a2[4];
      v14 = (char *)a2[5];
      if ( v13 == v14 )
      {
        sub_96B5C(a2 + 3, v13, buf);
        return 0;
      }
      else
      {
        v15 = v13 == 0;
        v16 = v13 + 4;
        if ( !v15 )
          v14 = (char *)buf[0];
        result = 0;
        if ( !v15 )
          *((_DWORD *)v16 - 1) = v14;
        a2[4] = v16;
      }
      return result;
    default:
      sub_946B0("Unhandled trace block type (%d) '%c ' while building trace frame info.", a1, a1);
      return 0;
  }
}
