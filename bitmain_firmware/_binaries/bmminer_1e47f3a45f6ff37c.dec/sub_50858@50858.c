int __fastcall sub_50858(unsigned int *a1, _DWORD *a2)
{
  int *v2; // r2
  int v3; // r0
  int v4; // r12
  int v5; // r2
  bool v6; // zf
  int v7; // r3
  int v8; // t1
  int v10; // r4
  unsigned int v11; // lr

  *a1 = 0;
  if ( !dword_9CD91C )
    return 0;
  v2 = (int *)dword_9CD914;
  if ( *(_DWORD *)(dword_9CD914 + 4) == 8 )
  {
    v10 = 28;
    v11 = 1;
    while ( 1 )
    {
      *a1 = v11;
      if ( dword_9CD91C <= v11++ )
        return 0;
      v2 = (int *)(dword_9CD914 + v10);
      v10 += 28;
      if ( v2[1] != 8 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v3 = *v2;
    v4 = 0;
    v5 = *v2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)++v5;
      v7 = v8;
      if ( (v8 & 0xDF) == 0 )
        break;
      v6 = v7 == 124;
      if ( v7 != 124 )
        v6 = v7 == 61;
      if ( v6 )
        break;
      ++v4;
    }
    *a2 = v4;
    return v3 + 1;
  }
}
