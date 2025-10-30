int __fastcall sub_8A0F0(int a1, int a2)
{
  *(_DWORD *)(*(_DWORD *)(a2 + 24) + 4) = **(_DWORD **)(a2 + 24);
  if ( (*(int (__fastcall **)(int, int, _DWORD))(a1 + 9252))(a1, a2, *(_DWORD *)(a2 + 24)) >= 0 )
    return sub_8EA80(
             *(_DWORD *)(a2 + 28),
             **(_DWORD **)(a2 + 24),
             *(_DWORD *)(*(_DWORD *)(a2 + 24) + 4) - **(_DWORD **)(a2 + 24),
             *(_DWORD *)(a1 + 9236),
             *(_DWORD *)(a1 + 9240),
             *(_DWORD *)(a1 + 9248),
             *(_DWORD *)(a1 + 9244));
  sub_8CD10(2, "src/spec.c", 366, "a_spec->gen_buf fail");
  return -1;
}
