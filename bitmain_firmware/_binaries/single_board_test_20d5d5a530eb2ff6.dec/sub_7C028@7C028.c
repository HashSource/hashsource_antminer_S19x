int *__fastcall sub_7C028(double a1)
{
  int *v1; // r4
  _DWORD *v2; // r6
  int v3; // r5
  int *v4; // r7
  _DWORD *v6; // r9
  int v7; // r5
  char *v8; // r7
  int v9; // r0
  _DWORD *v10; // r0
  unsigned int *v11; // r3
  unsigned int v12; // r4
  int *v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  int *v17; // r0
  char s[16]; // [sp+4h] [bp-10h] BYREF

  v2 = (_DWORD *)HIDWORD(a1);
  v1 = (int *)LODWORD(a1);
  if ( LODWORD(a1) )
  {
    switch ( *(_DWORD *)LODWORD(a1) )
    {
      case 0:
        if ( sub_7B248((int *)HIDWORD(a1), (const void *)LODWORD(a1), s, 0xBu) )
          return 0;
        v6 = sub_7B284();
        if ( !v6 )
          goto LABEL_21;
        v7 = sub_7B318(v1);
        if ( v7 )
        {
          while ( 1 )
          {
            v8 = (char *)sub_7B354(v7);
            v9 = sub_7B35C(v7);
            v10 = (_DWORD *)sub_7C028(v9, v2);
            if ( sub_7B948(v6, v8, v10) )
              break;
            v7 = sub_7B340(v1, v7);
            if ( !v7 )
              goto LABEL_26;
          }
          if ( v6[1] == -1 )
            goto LABEL_21;
          v11 = v6 + 1;
          __dmb(0xFu);
          do
          {
            v12 = __ldrex(v11);
            v1 = (int *)(v12 - 1);
          }
          while ( __strex((unsigned int)v1, v11) );
          if ( v1 )
LABEL_21:
            v1 = 0;
          else
            sub_7B714(v6);
        }
        else
        {
LABEL_26:
          v1 = v6;
        }
        sub_79AA4(v2, s);
        break;
      case 1:
        v3 = sub_7B248((int *)HIDWORD(a1), (const void *)LODWORD(a1), s, 0xBu);
        if ( v3 )
          return 0;
        v4 = sub_7B36C();
        if ( !v4 )
          goto LABEL_25;
        if ( *v1 == 1 && v1[3] )
        {
          while ( 1 )
          {
            v13 = (int *)sub_7C028(*(_DWORD *)(v1[4] + 4 * v3), v2);
            if ( sub_7BCD4(v4, v13) )
              break;
            if ( *v1 == 1 && ++v3 < (unsigned int)v1[3] )
              continue;
            goto LABEL_6;
          }
          if ( v4[1] == -1 )
            goto LABEL_25;
          v14 = (unsigned int *)(v4 + 1);
          __dmb(0xFu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( v16 )
          {
LABEL_25:
            v4 = 0;
          }
          else
          {
            v17 = v4;
            v4 = 0;
            sub_7B714(v17);
          }
        }
LABEL_6:
        v1 = v4;
        sub_79AA4(v2, s);
        break;
      case 2:
        return sub_7B460(*(_BYTE **)(LODWORD(a1) + 8), *(_DWORD *)(LODWORD(a1) + 12));
      case 3:
        return (int *)sub_7B5E8(*(_QWORD *)(LODWORD(a1) + 8));
      case 4:
        return (int *)sub_7B634(a1);
      case 5:
      case 6:
      case 7:
        return v1;
      default:
        return 0;
    }
  }
  return v1;
}
