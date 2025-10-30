void __fastcall sub_114AD4(char **a1, char *a2)
{
  char *v2; // r6
  char *v5; // r8
  char *v6; // r11
  __int64 v7; // r4
  size_t v8; // r5
  char *v9; // r0
  void *v10; // r9
  char *v11; // r3

  v2 = *a1;
  v5 = a1[1];
  v6 = (char *)(a2 - *a1);
  if ( !(-858993459 * ((v5 - *a1) >> 3)) )
  {
    HIDWORD(v7) = 1;
    goto LABEL_15;
  }
  HIDWORD(v7) = -1717986918 * ((v5 - *a1) >> 3);
  if ( -858993459 * ((v5 - *a1) >> 3) > HIDWORD(v7) || HIDWORD(v7) > 0x6666666 )
  {
    v8 = -16;
LABEL_4:
    v9 = (char *)sub_9836C(v8);
    v2 = *a1;
    v10 = v9;
    v5 = a1[1];
    HIDWORD(v7) = &v9[v8];
    LODWORD(v7) = a2 - *a1;
    goto LABEL_5;
  }
  if ( HIDWORD(v7) )
  {
LABEL_15:
    v8 = 40 * HIDWORD(v7);
    goto LABEL_4;
  }
  LODWORD(v7) = a2 - *a1;
  v10 = 0;
LABEL_5:
  if ( &v6[(_DWORD)v10] )
    memset(&v6[(_DWORD)v10], 0, 0x28u);
  if ( a2 != v2 )
    memmove(v10, v2, v7);
  v11 = (char *)v10 + v7 + 40;
  if ( v5 != a2 )
    v11 = (char *)memcpy(v11, a2, v5 - a2);
  LODWORD(v7) = &v11[v5 - a2];
  if ( v2 )
    sub_339E64(v2);
  *a1 = (char *)v10;
  *(_QWORD *)(a1 + 1) = v7;
}
