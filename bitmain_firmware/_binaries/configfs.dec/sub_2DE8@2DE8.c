__int64 __fastcall sub_2DE8(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // w23
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 v8; // x0
  unsigned int v9; // w0
  unsigned int v10; // w23

  v4 = sub_2C30(a1, a2);
  if ( v4 )
    return v4;
  v4 = sub_2A40(a1, (__int64)a2);
  if ( v4 )
    return v4;
  *(_DWORD *)(a2[18] + 64LL) |= 0x40u;
  down_write(a2[6] + 176LL);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = v6 - 120;
  if ( a1 + 104 == v6 )
  {
LABEL_9:
    up_write(a2[6] + 176LL);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_2F40(*(_QWORD *)(a1 + 72), v7);
      if ( v9 )
        break;
      v8 = *(_QWORD *)(v7 + 120);
      v7 = v8 - 120;
      if ( a1 + 104 == v8 )
        goto LABEL_9;
    }
    v10 = v9;
    sub_23E0(*(_QWORD *)(a1 + 72));
    sub_2130(*(_QWORD *)(a1 + 72));
    sub_22A0(*(_QWORD *)(a1 + 72));
    *(_DWORD *)(a2[6] + 12LL) |= 0x10u;
    raw_spin_lock(a2 + 11);
    *(_DWORD *)a2 |= 0x100u;
    raw_spin_unlock(a2 + 11);
    up_write(a2[6] + 176LL);
    d_delete(a2);
    return v10;
  }
}
