int __fastcall sub_3316B8(int a1, char *s1)
{
  if ( !strcmp(s1, "Conversion syntax") )
  {
    *(_DWORD *)(a1 + 20) |= 1u;
    return a1;
  }
  else if ( !strcmp(s1, "Division by zero") )
  {
    *(_DWORD *)(a1 + 20) |= 2u;
    return a1;
  }
  else if ( !strcmp(s1, "Division impossible") )
  {
    *(_DWORD *)(a1 + 20) |= 4u;
    return a1;
  }
  else if ( !strcmp(s1, "Division undefined") )
  {
    *(_DWORD *)(a1 + 20) |= 8u;
    return a1;
  }
  else if ( !strcmp(s1, "Inexact") )
  {
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return a1;
  }
  else if ( !strcmp(s1, "Insufficient storage") )
  {
    *(_DWORD *)(a1 + 20) |= 0x10u;
    return a1;
  }
  else if ( !strcmp(s1, "Invalid context") )
  {
    *(_DWORD *)(a1 + 20) |= 0x40u;
    return a1;
  }
  else if ( !strcmp(s1, "Invalid operation") )
  {
    *(_DWORD *)(a1 + 20) |= 0x80u;
    return a1;
  }
  else if ( !strcmp(s1, "Overflow") )
  {
    *(_DWORD *)(a1 + 20) |= 0x200u;
    return a1;
  }
  else if ( !strcmp(s1, "Clamped") )
  {
    *(_DWORD *)(a1 + 20) |= 0x400u;
    return a1;
  }
  else if ( !strcmp(s1, "Rounded") )
  {
    *(_DWORD *)(a1 + 20) |= 0x800u;
    return a1;
  }
  else if ( !strcmp(s1, "Subnormal") )
  {
    *(_DWORD *)(a1 + 20) |= 0x1000u;
    return a1;
  }
  else if ( !strcmp(s1, "Underflow") )
  {
    *(_DWORD *)(a1 + 20) |= 0x2000u;
    return a1;
  }
  else if ( !strcmp(s1, "No status") )
  {
    return a1;
  }
  else
  {
    return 0;
  }
}
