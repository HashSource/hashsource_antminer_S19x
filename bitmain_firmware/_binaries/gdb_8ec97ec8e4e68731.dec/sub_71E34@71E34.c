int __fastcall sub_71E34(_BOOL4 a1)
{
  _DWORD *v2; // r0
  int *v3; // r2
  int result; // r0
  int v5; // r1
  __int64 v6; // r6
  int v7; // r2
  int v8; // r3

  if ( !dword_474948 || (v2 = *(_DWORD **)(dword_474948 + 4 * dword_47494C)) == 0 )
  {
    sub_70ED8();
    v6 = *(_QWORD *)&dword_474948;
    v2 = sub_71DF0(dword_474A5C, 0x4000);
    v8 = dword_474948;
    *(_DWORD *)(v6 + 4 * HIDWORD(v6)) = v2;
    if ( v8 )
      v7 = dword_47494C;
    else
      v2 = 0;
    if ( v8 )
      v2 = *(_DWORD **)(v8 + 4 * v7);
  }
  sub_71D68((int)v2, a1);
  v3 = *(int **)(dword_474948 + 4 * dword_47494C);
  result = *v3;
  v5 = v3[4];
  dword_4748EC = v3[2];
  dword_474A5C = result;
  LOBYTE(v3) = *(_BYTE *)dword_4748EC;
  dword_4748F0 = dword_4748EC;
  dword_474950 = v5;
  byte_474944 = (char)v3;
  return result;
}
