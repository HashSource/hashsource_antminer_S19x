__int64 __fastcall sub_BD75C(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // r0
  char *v5; // r3
  int v6; // r3

  if ( !sub_194300(*a2) )
  {
    result = sub_94700((int)"ax-gdb.c", 1208, "gen_deref: expected a pointer");
LABEL_5:
    sub_946E0("Attempt to dereference a generic pointer.", HIDWORD(result));
  }
  result = sub_171258(*(_DWORD *)(*(_DWORD *)(*a2 + 24) + 20));
  v5 = *(char **)(result + 24);
  *a2 = result;
  v6 = *v5;
  if ( v6 == 10 )
    goto LABEL_5;
  *a1 = v6 != 7;
  return result;
}
