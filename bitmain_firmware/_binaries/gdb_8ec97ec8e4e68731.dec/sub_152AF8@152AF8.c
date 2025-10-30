int sub_152AF8()
{
  int v0; // r5
  _DWORD *v2; // r3
  void (__fastcall *v3)(_DWORD); // r2
  int v4; // r0
  int v5; // r3
  void *v6; // r0
  int v7; // r6
  void (__fastcall *v8)(int); // r5

  v0 = 3;
  while ( 1 )
  {
    if ( dword_487658 == 1 )
    {
      v4 = sub_1527A0(0);
      v5 = dword_487658 + 1;
      if ( dword_487658 == 2 )
        v5 = 0;
      dword_487658 = v5;
      if ( v4 > 0 )
        return 1;
      goto LABEL_23;
    }
    if ( dword_487658 == 2 )
      break;
    if ( dword_487658 )
      sub_94700((int)"event-loop.c", 329, "unexpected event_source_head %d", dword_487658);
    if ( !dword_487650 )
    {
      dword_48764C = 0;
      dword_487658 = 1;
      goto LABEL_23;
    }
    if ( sub_1526D4() )
    {
      v6 = (void *)dword_487650;
      v7 = *(_DWORD *)(dword_487650 + 20);
      v8 = *(void (__fastcall **)(int))(dword_487650 + 16);
      dword_487650 = *(_DWORD *)(dword_487650 + 12);
      sub_33AC04(v6);
      v8(v7);
      goto LABEL_17;
    }
    if ( ++dword_487658 == 3 )
    {
LABEL_9:
      --v0;
      dword_487658 = 0;
      if ( !v0 )
        goto LABEL_10;
    }
    else
    {
LABEL_23:
      if ( !--v0 )
      {
LABEL_10:
        if ( sub_1527A0(1) >= 0 )
          return 1;
        return -1;
      }
    }
  }
  v2 = (_DWORD *)dword_48765C;
  if ( !dword_48765C )
    goto LABEL_9;
  while ( !*v2 )
  {
    v2 = (_DWORD *)v2[1];
    if ( !v2 )
      goto LABEL_9;
  }
  v3 = (void (__fastcall *)(_DWORD))v2[2];
  *v2 = 0;
  v3(v2[3]);
LABEL_17:
  if ( dword_487658 != 2 )
  {
    ++dword_487658;
    return 1;
  }
  dword_487658 = 0;
  return 1;
}
