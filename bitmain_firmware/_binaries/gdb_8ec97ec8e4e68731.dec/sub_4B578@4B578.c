int sub_4B578()
{
  sub_4A2D4();
  sub_539C0("checkpoint", 10, sub_4AA24, "Fork a duplicate process (experimental).");
  sub_539C0(
    "restart",
    10,
    sub_4AC78,
    "restart <n>: restore program context from a checkpoint.\n"
    "Argument 'n' is checkpoint ID, as displayed by 'info checkpoints'.");
  sub_53274("checkpoint", 10, sub_4ADA8, "Delete a checkpoint (experimental).", &unk_4747A0);
  sub_53274("checkpoint", 10, sub_4A678, "Detach from a checkpoint (experimental).", &unk_47479C);
  return sub_5398C("checkpoints", sub_4A3CC, "IDs of currently known checkpoints.");
}
