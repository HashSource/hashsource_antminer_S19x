int __fastcall sub_331410(int a1, char *s1)
{
  __int64 v4; // r2
  __int64 v6; // r2
  __int64 v7; // r2
  __int64 v8; // r2
  __int64 v9; // r2
  __int64 v10; // r2
  __int64 v11; // r2
  __int64 v12; // r2
  __int64 v13; // r2
  __int64 v14; // r2
  __int64 v15; // r2
  __int64 v16; // r2
  __int64 v17; // r2

  if ( !strcmp(s1, "Conversion syntax") )
  {
    v4 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v4) | 1;
    if ( (v4 & 1) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Division by zero") )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v6) | 2;
    if ( (v6 & 2) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Division impossible") )
  {
    v8 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v8) | 4;
    if ( (v8 & 4) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Division undefined") )
  {
    v7 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v7) | 8;
    if ( (v7 & 8) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Inexact") )
  {
    v10 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v10) | 0x20;
    if ( (v10 & 0x20) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Insufficient storage") )
  {
    v9 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v9) | 0x10;
    if ( (v9 & 0x10) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Invalid context") )
  {
    v11 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v11) | 0x40;
    if ( (v11 & 0x40) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Invalid operation") )
  {
    v12 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v12) | 0x80;
    if ( (v12 & 0x80) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Overflow") )
  {
    v13 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v13) | 0x200;
    if ( (v13 & 0x200) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Clamped") )
  {
    v14 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v14) | 0x400;
    if ( (v14 & 0x400) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Rounded") )
  {
    v15 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v15) | 0x800;
    if ( (v15 & 0x800) == 0 )
      return a1;
  }
  else if ( !strcmp(s1, "Subnormal") )
  {
    v16 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v16) | 0x1000;
    if ( (v16 & 0x1000) == 0 )
      return a1;
  }
  else
  {
    if ( strcmp(s1, "Underflow") )
    {
      if ( strcmp(s1, "No status") )
        return 0;
      return a1;
    }
    v17 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = HIDWORD(v17) | 0x2000;
    if ( (v17 & 0x2000) == 0 )
      return a1;
  }
  raise(8);
  return a1;
}
