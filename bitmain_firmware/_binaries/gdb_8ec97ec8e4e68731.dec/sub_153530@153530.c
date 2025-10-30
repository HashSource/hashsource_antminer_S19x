_DWORD *__fastcall sub_153530(_DWORD *a1)
{
  struct __jmp_buf_tag *v1; // r0
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v1 = (struct __jmp_buf_tag *)sub_92DC8();
  setjmp(v1);
  while ( sub_92E18() )
  {
    while ( sub_92E20() )
    {
      v2 = sub_2936C0();
      if ( off_487664 )
        ((void (__fastcall *)(int))off_487664)(v2);
    }
  }
  if ( sub_92EB4(v7, 6) )
  {
    v3 = v7[1];
    v4 = v7[2];
    *a1 = v7[0];
    a1[1] = v3;
    a1[2] = v4;
  }
  return a1;
}
