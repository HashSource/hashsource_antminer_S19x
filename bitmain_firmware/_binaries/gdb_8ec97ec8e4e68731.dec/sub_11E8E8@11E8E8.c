int __fastcall sub_11E8E8(int result)
{
  int v1; // r3
  int v2; // r1
  bool v3; // zf
  int v4; // r3
  int v5; // r4
  _DWORD *v6; // r5
  int v7; // r2
  int v8; // [sp+4h] [bp-14h]

  v1 = *(_DWORD *)(dword_4872D8 + 396);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 16);
    v3 = v1 == result;
    v4 = *(_DWORD *)(v2 + 132);
    if ( v3 )
    {
      v6 = (_DWORD *)(dword_4872D8 + 396);
      v7 = v2;
LABEL_10:
      v5 = result;
      v8 = v4;
      result = ((int (__fastcall *)(int))loc_11E87C)(v7);
      *(_DWORD *)(v5 + 16) = 0;
      *v6 = v8;
    }
    else
    {
      while ( v4 )
      {
        v7 = *(_DWORD *)(v4 + 16);
        v3 = result == v4;
        v4 = *(_DWORD *)(v7 + 132);
        if ( v3 )
        {
          v6 = (_DWORD *)(v2 + 132);
          goto LABEL_10;
        }
        v2 = v7;
      }
    }
  }
  return result;
}
