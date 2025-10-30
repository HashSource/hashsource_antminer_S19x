int __fastcall sub_1950DC(int result, char *a2, int a3, int (__fastcall *a4)(_DWORD, int))
{
  char *v4; // r9
  int v5; // r1
  int (__fastcall *v6)(_DWORD, int); // r6
  char *v7; // r5
  int v8; // r10
  int v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r3
  __int64 v13; // r0
  char *v14; // r7
  int *v15; // r11
  int *v16; // r4
  int v17; // r1
  int v18; // r2
  int v19; // t1
  int v20; // r4
  int v21; // r7
  int *v22; // r9
  int v23; // t1
  int v25; // t1
  int v26; // r0
  char *v27; // r8
  char *v28; // [sp+Ch] [bp-8h]

  v4 = a2;
  v5 = (int)&a2[-result];
  if ( v5 <= 64 )
    return result;
  v6 = a4;
  if ( a3 )
    a4 = (int (__fastcall *)(_DWORD, int))(result + 4);
  v7 = (char *)result;
  v8 = a3;
  if ( !a3 )
  {
    v27 = v4;
LABEL_22:
    v20 = v5 >> 2;
    v21 = ((v5 >> 2) - 2) >> 1;
    v22 = (int *)&v7[4 * v21];
    do
    {
      v23 = *v22--;
      sub_194FA0((int)v7, v21, v20, v23, v6);
    }
    while ( v21-- != 0 );
    do
    {
      v25 = *((_DWORD *)v27 - 1);
      v27 -= 4;
      *(_DWORD *)v27 = *(_DWORD *)v7;
      result = sub_194FA0((int)v7, 0, (v27 - v7) >> 2, v25, v6);
    }
    while ( v27 - v7 > 4 );
    return result;
  }
  v28 = (char *)a4;
  while ( 2 )
  {
    v9 = v5 >> 3;
    --v8;
    v10 = v6(*((_DWORD *)v7 + 1), *(_DWORD *)&v7[4 * (v5 >> 3)]);
    v11 = *((_DWORD *)v4 - 1);
    if ( v10 )
    {
      if ( v6(*(_DWORD *)&v7[4 * v9], v11) )
      {
        v12 = *(_DWORD *)v7;
LABEL_29:
        *(_DWORD *)v7 = *(_DWORD *)&v7[4 * v9];
        *(_DWORD *)&v7[4 * v9] = v12;
        LODWORD(v13) = *((_DWORD *)v7 + 1);
        HIDWORD(v13) = *(_DWORD *)v7;
        goto LABEL_13;
      }
      if ( v6(*((_DWORD *)v7 + 1), *((_DWORD *)v4 - 1)) )
      {
        v12 = *(_DWORD *)v7;
        goto LABEL_12;
      }
LABEL_30:
      v13 = *(_QWORD *)v7;
      *((_DWORD *)v7 + 1) = *(_DWORD *)v7;
      *(_DWORD *)v7 = HIDWORD(v13);
      goto LABEL_13;
    }
    if ( v6(*((_DWORD *)v7 + 1), v11) )
      goto LABEL_30;
    v26 = v6(*(_DWORD *)&v7[4 * v9], *((_DWORD *)v4 - 1));
    v12 = *(_DWORD *)v7;
    if ( !v26 )
      goto LABEL_29;
LABEL_12:
    *(_DWORD *)v7 = *((_DWORD *)v4 - 1);
    *((_DWORD *)v4 - 1) = v12;
    LODWORD(v13) = *((_DWORD *)v7 + 1);
    HIDWORD(v13) = *(_DWORD *)v7;
LABEL_13:
    v14 = v28;
    v15 = (int *)v4;
    while ( 1 )
    {
      v27 = v14;
      if ( v6(v13, HIDWORD(v13)) )
        goto LABEL_19;
      v16 = v15 - 1;
      do
      {
        v17 = *v16;
        v15 = v16--;
      }
      while ( v6(*(_DWORD *)v7, v17) );
      if ( v14 >= (char *)v15 )
        break;
      v18 = *(_DWORD *)v14;
      *(_DWORD *)v14 = *v15;
      *v15 = v18;
LABEL_19:
      v19 = *((_DWORD *)v14 + 1);
      v14 += 4;
      LODWORD(v13) = v19;
      HIDWORD(v13) = *(_DWORD *)v7;
    }
    result = sub_1950DC(v14, v4, v8, v6);
    v5 = v14 - v7;
    if ( v14 - v7 > 64 )
    {
      v4 = v14;
      if ( !v8 )
        goto LABEL_22;
      continue;
    }
    return result;
  }
}
