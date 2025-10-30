int __fastcall sub_4E370(int a1, int a2, int a3)
{
  int v5; // r0
  int result; // r0
  _DWORD *v7; // r6
  bool v8; // cc
  int v9; // r3
  bool v10; // cc
  int v11; // r3
  bool v12; // cc

  v5 = sub_1DD58C(a2);
  result = sub_163E78(v5);
  v7 = (_DWORD *)result;
  if ( a3 != -1 )
  {
    v8 = a3 <= 25;
    if ( a3 != 25 )
      v8 = a3 <= 15;
    if ( v8 )
      return sub_4DED0(a2);
    if ( (unsigned int)(a3 - 16) > 8 )
    {
      if ( *(_DWORD *)(result + 12) && (unsigned int)(a3 - 26) <= 0x1F )
        return sub_4DFCC(a2);
      v9 = *(_DWORD *)(result + 16);
      v10 = v9 <= 0;
      if ( v9 > 0 )
        v10 = a3 <= 57;
      if ( !v10 )
      {
        v11 = v9 + 57;
        v12 = a3 < 90;
        if ( a3 != 90 )
          v12 = v11 < a3;
        if ( !v12 )
          return sub_4E268(a2);
      }
      return result;
    }
LABEL_23:
    JUMPOUT(0x4E110);
  }
  result = sub_4DED0(a2);
  if ( v7[3] )
    result = sub_4DFCC(a2);
  if ( (int)v7[4] > 0 )
    result = sub_4E268(a2);
  if ( v7[2] )
    goto LABEL_23;
  return result;
}
