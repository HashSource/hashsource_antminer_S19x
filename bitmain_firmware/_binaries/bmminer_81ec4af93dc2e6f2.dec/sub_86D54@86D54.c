int __fastcall sub_86D54(int a1, int a2)
{
  *(_DWORD *)(*(_DWORD *)(a2 + 24) + 4) = **(_DWORD **)(a2 + 24);
  if ( (*(int (__fastcall **)(int, int, _DWORD))(a1 + 9252))(a1, a2, *(_DWORD *)(a2 + 24)) >= 0 )
    return sub_8B700(
             *(_DWORD *)(a2 + 28),
             **(_DWORD **)(a2 + 24),
             *(_DWORD *)(*(_DWORD *)(a2 + 24) + 4) - **(_DWORD **)(a2 + 24),
             *(_DWORD *)(a1 + 9236),
             *(_DWORD *)(a1 + 9240),
             *(_DWORD *)(a1 + 9248),
             *(_DWORD *)(a1 + 9244));
  sub_89984(2, "src/spec.c", 366, "a_spec->gen_buf fail");
  return -1;
}
