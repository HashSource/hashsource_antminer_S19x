int __fastcall sub_1AF140(_BYTE *a1, int a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r12
  _BYTE v11[28]; // [sp+0h] [bp-1Ch] BYREF

  v3 = sub_1AF0D0(a2);
  result = sub_234884(v3);
  if ( a1 && *a1 )
  {
    result = sub_5ADF4((int)v11, (int)a1);
    while ( !v11[0] )
    {
      result = sub_5AE34((int)v11, v7, v8);
      v9 = *off_46D9C4;
      v10 = off_46D9C4[1];
      if ( *off_46D9C4 == v10 )
      {
LABEL_13:
        result = sub_259858("No memory region number %d.\n", result);
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v9 + 8);
          if ( result == v8 )
            break;
          v9 += 40;
          if ( v10 == v9 )
            goto LABEL_13;
        }
        *(_BYTE *)(v9 + 12) = 0;
      }
    }
  }
  else
  {
    v5 = *off_46D9C4;
    v6 = off_46D9C4[1];
    if ( v6 != *off_46D9C4 )
    {
      do
      {
        *(_BYTE *)(v5 + 12) = 0;
        v5 += 40;
      }
      while ( v6 != v5 );
    }
  }
  return result;
}
