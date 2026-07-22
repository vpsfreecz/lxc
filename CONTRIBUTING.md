Contributing to this project
----------------------------

This project accepts contributions. In order to contribute, you should
pay attention to a few things:

    1 - your code must follow the coding style rules
    2 - the format of the submission must be GitHub pull requests
    3 - your work must be signed


Coding Style:
-------------

The LXC project generally follows the Linux kernel coding style.  However there
are a few differences, these are outlined it CODING_STLYE.md

The Linux kernel coding style guide can be found within the kernel tree:

	Documentation/process/coding-style.rst

It can be accessed online too:

https://www.kernel.org/doc/html/latest/process/coding-style.html

Submitting Modifications:
-------------------------

The contributions must be GitHub pull requests.

vpsAdminOS downstream patch stacks:
-----------------------------------

The vpsfree.cz fork maintains vpsAdminOS release branches as reviewed logical
patch series.  Their shipping history describes durable behavior, not the
chronological sequence of fixes made while developing it.

Follow these rules for every downstream release stack:

* One commit owns one coherent feature, new type of functionality, or distinct
  behavior change.  Fold feature-specific helpers, callers, tests,
  compatibility work, completions, and caused fixes into that owner.  Split
  mixed changes; keep an independent upstream or baseline fix separate when
  that is its true identity.  Do not combine unrelated work merely to reduce
  the commit count.
* Prefix every commit that carries genuine vpsAdminOS-owned functionality,
  ABI, product policy, or intentional behavior with the exact subject marker
  ``[vpsAdminOS]``.  This is a semantic ownership marker, not a blanket marker
  for every patch the distribution carries.  Pristine upstream backports,
  independent generic fixes, and separate support-only patches remain
  unmarked.
* Treat the first unversioned publication of a downstream logical patch as
  v1.  Advance ``vN`` for a real source, semantic, compatibility-port,
  folded-correction, or substantive-message revision.  A patch-identical
  transplant or publication-only Git object does not create a new version.
* Revised downstream patches carry a chronological development history which
  explains what changed at each real version.  A meaningful commit message
  explains the problem, before/after behavior, design and invariants,
  provenance, relevant constraints, and validation.
* Preserve truthful upstream subjects, authorship, messages, credits, and
  trailers.  Record adaptations explicitly and never invent a sign-off or
  other contributor attestation.
* Release history must not contain ``fixup!``, ``squash!``, WIP, temporary
  audit, duplicate-revision, or repair-tail commits.  Every retained boundary
  must remain reviewable and bisectable to the extent LXC permits.
* Before promotion, review the complete downstream range directly,
  patch-by-patch and as a final tree, and run the appropriate exact-head
  product validation.  Keep exact refs, decisions, results, and remaining
  work only in the existing Markdown release tracker.  Do not create a review
  harness, schema, machine ledger, manifest, registry, generator, verifier,
  scheduler, evidence bundle, or parallel state system.  Release-specific
  excluded projects are selected explicitly by the review; they are not
  hard-coded into this general policy.

Licensing for new files:
------------------------

LXC is made of files shipped under a few different licenses.

Anything that ends up being part of the LXC library needs to be released
under LGPLv2.1+ or a license compatible with it (though the latter will
only be accepted for cases where the code originated elsewhere and was
imported into LXC).

Language bindings for the libraries need to be released under LGPLv2.1+.

Anything else (non-libraries) needs to be Free Software and needs to be
allowed to link with LGPLv2.1+ code (if needed). LXC upstream prefers
LGPLv2.1+ or GPLv2 for those.

When introducing a new file into the project, please make sure it has a
copyright header making clear under which license it's being released
and if it doesn't match the criteria described above, please explain
your decision on the lxc-devel mailing-list when submitting your patch.

Developer Certificate of Origin:
--------------------------------

To improve tracking of contributions to this project we will use a
process modeled on the modified DCO 1.1 and use a "sign-off" procedure.

The sign-off is a simple line at the end of the explanation for the
patch, which certifies that you wrote it or otherwise have the right
to pass it on as an open-source patch.  The rules are pretty simple:
if you can certify the below:

By making a contribution to this project, I certify that:

(a) The contribution was created in whole or in part by me and I have
    the right to submit it under the open source license indicated in
    the file; or

(b) The contribution is based upon previous work that, to the best of
    my knowledge, is covered under an appropriate open source License
    and I have the right under that license to submit that work with
    modifications, whether created in whole or in part by me, under
    the same open source license (unless I am permitted to submit
    under a different license), as indicated in the file; or

(c) The contribution was provided directly to me by some other person
    who certified (a), (b) or (c) and I have not modified it.

(d) The contribution is made free of any other party's intellectual
    property claims or rights.

(e) I understand and agree that this project and the contribution are
    public and that a record of the contribution (including all
    personal information I submit with it, including my sign-off) is
    maintained indefinitely and may be redistributed consistent with
    this project or the open source license(s) involved.


then you just add a line saying

    Signed-off-by: Random J Developer <random@developer.org>

You can do it by using option -s or --signoff when you commit

    git commit --signoff ...

using your real name (sorry, no pseudonyms or anonymous contributions.)

In addition we support the following DCOs which maintainers can use to indicate
that a patch is acceptable:

    Acked-by: Random J Developer <random@developer.org>
    Reviewed-by: Random J Developer <random@developer.org>

If you are contributing as a group who is implementing a feature together such
that it cannot be reasonably attributed to a single developer please use:

    Co-developed-by: Random J Developer 1 <random_1@developer.org>
    Co-developed-by: Random J Developer 2 <random_1@developer.org>

AI Generated Code:
------------------

Substantially AI generated code is not welcome.  There are several
reasons for this.  First, it violates the "The contribution was created
in whole or in part by me" statement of DCO.  Second, the licensing
implications are not yet clear.  Thirdly, we expect anyone who submits
code to fully understand what they are submitting.  Finally, we put
a lot of time into reviewing patch submissions.  Increasing the
volume of code to be reviewed with autogenerated boilerplate drivel
will take away time from more important reviews.
