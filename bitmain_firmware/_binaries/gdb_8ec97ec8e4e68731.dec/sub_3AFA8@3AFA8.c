int __fastcall sub_3AFA8(int a1, _DWORD *a2)
{
  int v3; // r0

  if ( a1 )
  {
LABEL_9:
    a2[6] = -1;
    return sub_3AF60((int)a2);
  }
  else
  {
    if ( a2[6] )
      return sub_3AF60((int)a2);
    while ( 1 )
    {
      v3 = (*(int (__fastcall **)(_DWORD *, int))(a2[3] + 76))(a2, 0x2000);
      if ( v3 >= 0 )
        break;
      if ( *_errno_location() != 4 )
        goto LABEL_9;
    }
    if ( v3 )
    {
      a2[6] = v3;
      a2[7] = a2 + 8;
      return sub_3AF60((int)a2);
    }
    a2[6] = -3;
    return sub_3AF60((int)a2);
  }
}
