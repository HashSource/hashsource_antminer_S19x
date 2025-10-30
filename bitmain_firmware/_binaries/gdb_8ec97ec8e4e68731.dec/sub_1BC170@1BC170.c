int __fastcall sub_1BC170(int *a1, int a2, int a3, int a4)
{
  int v5; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r12
  _BOOL4 v12; // r10
  _BOOL4 v13; // r3
  _DWORD *v14; // r9
  int *v15; // r6
  int v17; // r4
  int v18; // r0
  int v19; // r1
  int v20; // [sp+0h] [bp-Ch] BYREF
  int v21; // [sp+4h] [bp-8h] BYREF

  v5 = a2;
  v21 = a2;
  v20 = a3;
  v7 = (_DWORD *)sub_26BC70(a2);
  v8 = (_DWORD *)sub_171258(v7);
  v9 = (_DWORD *)sub_26BC70(v20);
  v10 = sub_171258(v9);
  v11 = (_DWORD *)v8[6];
  v12 = (*v11 & ((unsigned int)off_100FC + 3)) == (_DWORD)&dword_10000 + 2;
  v13 = (((unsigned int)off_100FC + 3) & **(_DWORD **)(v10 + 24)) == (_DWORD)&dword_10000 + 2;
  if ( v12 || v13 )
  {
    if ( v12 && v13 )
    {
      return sub_1BBE4C(a1 + 1, v5, v20, a4);
    }
    else
    {
      if ( (int *)(*v11 & ((unsigned int)off_100FC + 3)) == (int *)((char *)&dword_10000 + 2) )
      {
        if ( **(_BYTE **)(v10 + 24) != 9 && !sub_1736DC((_DWORD *)v10) )
LABEL_13:
          sub_946E0("Argument to operation not a number or boolean.");
        v14 = v8;
        v5 = v20;
        v15 = &v20;
      }
      else
      {
        v14 = (_DWORD *)v10;
        if ( *(_BYTE *)v11 != 9 && !sub_1736DC(v8) )
          goto LABEL_13;
        v15 = &v21;
      }
      *v15 = sub_1BC080(v14, v5);
      return sub_1BBE4C(a1 + 1, v21, v20, a4);
    }
  }
  else
  {
    v17 = sub_1BAE38(v5, v20, a4);
    v18 = sub_19462C(*a1, a1[1]);
    return sub_26DAF4(v18, v19, v17, v17 >> 31);
  }
}
