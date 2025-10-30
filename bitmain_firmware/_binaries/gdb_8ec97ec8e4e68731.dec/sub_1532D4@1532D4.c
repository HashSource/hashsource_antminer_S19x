void __fastcall sub_1532D4(_DWORD *a1)
{
  int *v1; // r12
  __int64 v3; // r0
  int v4; // r3
  int v5; // r2

  v1 = dword_487320;
  HIDWORD(v3) = *a1;
  LODWORD(v3) = dword_48765C;
  if ( dword_48765C == HIDWORD(v3) )
  {
    dword_48765C = *(_DWORD *)(dword_48765C + 4);
    v4 = dword_48765C;
    if ( dword_48765C )
      goto LABEL_11;
    goto LABEL_15;
  }
  if ( dword_48765C )
  {
    v4 = *(_DWORD *)(dword_48765C + 4);
    if ( HIDWORD(v3) == v4 )
      goto LABEL_9;
    while ( v4 )
    {
      if ( HIDWORD(v3) == *(_DWORD *)(v4 + 4) )
        goto LABEL_10;
      v4 = *(_DWORD *)(v4 + 4);
    }
  }
  v3 = sub_94700(
         (int)"event-loop.c",
         1091,
         "%s: Assertion `%s' failed.",
         "void delete_async_event_handler(async_event_handler**)",
         "prev_ptr");
LABEL_9:
  v4 = v3;
LABEL_10:
  v5 = v1[208];
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(HIDWORD(v3) + 4);
  LODWORD(v3) = *a1;
  if ( v5 == *a1 )
LABEL_15:
    v1[208] = v4;
LABEL_11:
  if ( (_DWORD)v3 )
    free((void *)v3);
  *a1 = 0;
}
