void __fastcall sub_1DB230(int a1, __int64 a2)
{
  int *v3; // r0

  v3 = &dword_4880B8;
  while ( v3[2] )
  {
    v3 = (int *)v3[1];
    if ( !v3 )
      goto LABEL_8;
  }
LABEL_3:
  if ( *((_QWORD *)v3 + 3) != a2 )
  {
    while ( 1 )
    {
      v3 = (int *)v3[1];
      if ( !v3 )
        break;
      if ( !v3[2] )
        goto LABEL_3;
    }
  }
LABEL_8:
  JUMPOUT(0x1DB168);
}
