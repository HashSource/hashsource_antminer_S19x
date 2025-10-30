void __fastcall sub_DCB38(int a1, unsigned int a2)
{
  char *v2; // r5
  const char *v3; // r0
  int v4; // r3
  unsigned int v5; // r2
  int v6; // r0
  unsigned int v7; // t1
  bool v8; // cc
  int v9; // r0
  int *v10; // r4
  int v11; // t1

  v2 = off_46C09C;
  if ( off_46C09C == "target" )
  {
    if ( !off_489B60(&dword_4899A0) )
    {
      off_46C09C = off_46C048;
      sub_946B0("Target does not support breakpoint condition evaluation.\nUsing host evaluation mode instead.");
      return;
    }
    v2 = off_46C09C;
  }
  if ( v2 == "auto" )
  {
    if ( off_489B60(&dword_4899A0) )
      v2 -= 8;
    else
      v2 -= 16;
  }
  v3 = off_46C048;
  if ( off_46C048 == "auto" )
  {
    if ( off_489B60(&dword_4899A0) )
      v3 = "target";
    else
      v3 = "host";
  }
  off_46C048 = off_46C09C;
  if ( v3 != v2 )
  {
    v4 = dword_478368;
    v5 = dword_478368 + 4 * dword_47836C;
    if ( v2 == "target" )
    {
      if ( dword_478368 < v5 )
      {
        v9 = *(_DWORD *)dword_478368;
        if ( *(_DWORD *)dword_478368 )
        {
          v10 = (int *)(dword_478368 + 4);
          do
          {
            sub_CA320(v9 + 16, (_DWORD *)(v9 + 28));
            v5 = dword_47836C;
            if ( (unsigned int)v10 >= dword_478368 + 4 * dword_47836C )
              break;
            v11 = *v10++;
            v9 = v11;
          }
          while ( v11 );
        }
      }
    }
    else if ( dword_478368 < v5 )
    {
      v5 = *(_DWORD *)dword_478368;
      if ( *(_DWORD *)dword_478368 )
      {
        v6 = dword_478368 + 4 * dword_47836C - 4;
        do
        {
          a2 = *(_DWORD *)(*(_DWORD *)(v5 + 16) + 12);
          v8 = a2 > 0x1E;
          if ( a2 != 30 )
            v8 = a2 - 1 > 1;
          if ( !v8 )
          {
            a2 = *(unsigned __int8 *)(v5 + 39);
            if ( *(_BYTE *)(v5 + 39) )
              *(_BYTE *)(v5 + 36) = 1;
          }
          if ( v4 == v6 )
            break;
          v7 = *(_DWORD *)(v4 + 4);
          v4 += 4;
          v5 = v7;
        }
        while ( v7 );
      }
    }
    sub_D72EC(1, a2, v5);
  }
}
