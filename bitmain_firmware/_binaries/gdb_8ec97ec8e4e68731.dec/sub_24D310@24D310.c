int __fastcall sub_24D310(char *a1, int **a2)
{
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r0
  char *v6; // r4
  size_t v7; // r0
  _BYTE *v8; // r0
  int *v9; // r4
  unsigned int v10; // r5
  unsigned int v11; // r1
  int result; // r0
  int *v13; // r0
  int *v14; // r3
  unsigned int v15[2]; // [sp+0h] [bp-2Ch] BYREF
  __int64 v16; // [sp+8h] [bp-24h] BYREF
  unsigned int v17; // [sp+10h] [bp-1Ch] BYREF

  strlen(a1);
  v4 = sub_99188((unsigned __int8 *)a1, v15);
  v5 = sub_99188(v4 + 1, (unsigned int *)&v16);
  v6 = (char *)(sub_99188(v5 + 1, &v17) + 1);
  v7 = strlen(v6);
  v8 = sub_991F8((unsigned __int8 *)v6, v15, v7 >> 1);
  v9 = *a2;
  *((_BYTE *)v15 + (_DWORD)v8) = 0;
  v10 = v15[0];
  if ( v9 )
  {
    while ( v15[0] != v9[1] )
    {
      v9 = (int *)v9[5];
      if ( !v9 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v13 = (int *)sub_93094(1u, 0x18u);
    v14 = *a2;
    v9 = v13;
    v13[1] = v10;
    *a2 = v13;
    v13[5] = (int)v14;
  }
  v11 = v17;
  *((_QWORD *)v9 + 1) = v16;
  v9[4] = v11;
  result = sub_327254(v15);
  *v9 = result;
  return result;
}
