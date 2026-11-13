# GIT Documentation

## Table of Contents

1. [Introduction & Installation](#1-introduction--installation)
2. [Git Basics & Repository Setup](#2-git-basics--repository-setup)
3. [Essential Git Commands](#3-essential-git-commands)
4. [Branching & Merging](#4-branching--merging)
5. [Working with Remote Repositories](#5-working-with-remote-repositories)
6. [Undoing Changes & Resolving Conflicts](#6-undoing-changes--resolving-conflicts)
7. [Git Workflows, Best Practices & Resources](#7-git-workflows-best-practices--resources)

---

## 1. Introduction & Installation

### 1.1 What is Git?

Git is a free, open-source distributed version control system used to track changes in files and manage source code.

It allows multiple developers to work on the same project while maintaining a history of changes.

### 1.2 Why Use Git?

- Tracks changes made to files.
- Maintains the history of a project.
- Allows developers to work on different features independently.
- Makes collaboration easier.
- Helps restore previous versions of a project.
- Supports integration with platforms such as GitHub and GitLab.

### 1.3 Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Cloud-based code hosting platform |
| Installed locally | Accessed through a website or Git tools |
| Tracks changes in a repository | Hosts remote repositories |
| Works without an internet connection for local operations | Supports collaboration and code review |

### 1.4 Installing Git

**Windows:**
1. Visit [git-scm.com](https://git-scm.com/).
2. Download Git for Windows.
3. Run the installer.
4. Follow the installation instructions.

**Linux (Ubuntu/Debian):**

```bash
sudo apt update
sudo apt install git
```

**macOS (Homebrew):**

```bash
brew install git
```

### 1.5 Verify Installation

Open a terminal or Git Bash and run:

```bash
git --version
```

If Git is installed correctly, the command displays the installed version.

### 1.6 Initial Git Configuration

Configure your username and email address:

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

These details are recorded in your commits.

To view your configuration:

```bash
git config --list
```

---
## 2. Git Basics & Repository Setup

A Git repository is a project directory whose changes are tracked by Git. It stores the project's files along with their version history.

### 2.1 Important Git Concepts

| Term | Meaning |
|---|---|
| Repository | A directory tracked by Git |
| Working Directory | The files you currently work on |
| Staging Area | Holds changes selected for the next commit |
| Commit | A saved snapshot of staged changes |
| Branch | An independent line of development |
| HEAD | Points to the currently checked-out commit |

### 2.2 Creating a Git Repository

Navigate to your project folder:

```bash
cd my-project
```

Initialize Git:

```bash
git init
```

This creates a hidden `.git` directory that stores repository data and version history.

### 2.3 Checking Repository Status

Use:

```bash
git status
```

This displays:
- Modified files.
- Untracked files.
- Files staged for the next commit.
- The current branch.

### 2.4 Understanding the Git Workflow

Git follows three main stages:

1. **Working Directory:** Modify or create files.
2. **Staging Area:** Select changes for the next commit.
3. **Repository:** Save staged changes through a commit.

Basic workflow:

```bash
git add filename
git commit -m "Add project files"
```

To stage all changes in the current directory:

```bash
git add .
```

### 2.5 Creating Your First Commit

A commit records the staged changes in the repository.

```bash
git add .
git commit -m "Initial commit"
```

A good commit message briefly describes the changes made.

### 2.6 Viewing Commit History

To view previous commits:

```bash
git log
```

For a compact history:

```bash
git log --oneline
```

To view commits with a graphical branch history:

```bash
git log --oneline --graph --all
```

### 2.7 Cloning an Existing Repository

To download an existing remote repository to your computer:

```bash
git clone repository-url
```

Example:

```bash
git clone https://github.com/username/project.git
```

Git creates a local copy of the repository, including its commit history.

### 2.8 Best Practices

- Initialize Git at the root of your project.
- Check repository status before committing.
- Write clear and meaningful commit messages.
- Avoid committing unnecessary files such as temporary files or build outputs.
- Use a `.gitignore` file to exclude files that should not be tracked.

---
## 3. Essential Git Commands

Git provides several commands to manage files, track changes, and maintain project history.

### 3.1 Basic Commands

| Command | Purpose |
|---|---|
| `git init` | Initializes a new repository |
| `git status` | Displays the current repository status |
| `git add filename` | Adds a specific file to the staging area |
| `git add .` | Stages changes in the current directory |
| `git commit -m "message"` | Saves staged changes |
| `git log` | Displays commit history |
| `git diff` | Shows unstaged changes |
| `git diff --staged` | Shows staged changes |
| `git show` | Displays details of a commit |

### 3.2 Adding and Committing Changes

**Add a specific file:**

```bash
git add README.md
```

**Stage all changes:**

```bash
git add .
```

**Commit staged changes:**

```bash
git commit -m "Update documentation"
```

### 3.3 Checking Differences

To see changes that have not been staged:

```bash
git diff
```

To see changes that have already been staged:

```bash
git diff --staged
```

These commands help review modifications before committing.

### 3.4 Removing Files

Remove a file from both the working directory and Git tracking:

```bash
git rm filename
```

Remove a file only from Git tracking while keeping the local file:

```bash
git rm --cached filename
```

### 3.5 Renaming and Moving Files

Use:

```bash
git mv oldname newname
```

This renames or moves a tracked file and stages the change.

### 3.6 Ignoring Files with `.gitignore`

A `.gitignore` file specifies files and directories that Git should ignore when they are untracked.

Example `.gitignore`:

```gitignore
# Compiled files
*.exe
*.o

# Log files
*.log

# Temporary files
*.tmp

# Environment files
.env

# Build directory
build/
```

Create a `.gitignore` file in the repository's root directory and add the patterns you want Git to ignore.

**Note:** `.gitignore` does not automatically stop tracking files that have already been committed.

### 3.7 Useful Commands for Daily Work

| Command | Purpose |
|---|---|
| `git branch` | Lists local branches |
| `git switch branch-name` | Switches to another branch |
| `git fetch` | Downloads remote updates without integrating them |
| `git pull` | Fetches and integrates remote changes |
| `git push` | Uploads local commits to a remote repository |
| `git stash` | Temporarily saves uncommitted changes |

### 3.8 Best Practices

- Review changes using `git diff` before committing.
- Use descriptive commit messages.
- Keep commits focused on related changes.
- Maintain a suitable `.gitignore` file.
- Check `git status` regularly.

---
## 4. Branching & Merging

Branching allows developers to work on different features or fixes independently without affecting the main codebase.

Merging combines changes from different branches into a single branch.

### 4.1 What is a Branch?

A branch is an independent line of development in a Git repository.

The default branch is commonly named `main`.

For example:

```text
main
 ├── feature-login
 └── bug-fix
```

Developers can work on separate branches and merge their changes into `main` when ready.

### 4.2 Listing Branches

To list local branches:

```bash
git branch
```

To list both local and remote-tracking branches:

```bash
git branch -a
```

The current branch is marked with an asterisk (`*`).

### 4.3 Creating a Branch

To create a new branch:

```bash
git branch feature-login
```

This creates the branch but does not switch to it.

To create and switch to a branch:

```bash
git switch -c feature-login
```

Alternatively, the older command is:

```bash
git checkout -b feature-login
```

### 4.4 Switching Between Branches

To switch to an existing branch:

```bash
git switch main
```

Older alternative:

```bash
git checkout main
```

### 4.5 Merging Branches

Merging combines the changes from one branch into the currently checked-out branch.

Example: Merge `feature-login` into `main`.

**Step 1:** Switch to the target branch.

```bash
git switch main
```

**Step 2:** Merge the feature branch.

```bash
git merge feature-login
```

Git attempts to combine the changes automatically.

### 4.6 Types of Merging

**1. Fast-forward merge**

Occurs when the target branch has no new commits since the feature branch was created. Git simply moves the target branch pointer forward.

**2. Three-way merge**

Occurs when both branches have new commits. Git uses their common ancestor and the two branch tips to create a merge commit.

### 4.7 Deleting a Branch

After merging, a branch can be deleted.

Delete a merged local branch:

```bash
git branch -d feature-login
```

Force-delete a local branch:

```bash
git branch -D feature-login
```

The `-D` option deletes the branch even if Git considers it unmerged.

### 4.8 Renaming a Branch

Rename the current branch:

```bash
git branch -m new-branch-name
```

Rename another local branch:

```bash
git branch -m old-name new-name
```

### 4.9 Best Practices

- Create separate branches for new features and bug fixes.
- Keep branch names meaningful.
- Merge only after reviewing and testing changes.
- Delete branches that are no longer needed.
- Avoid making unrelated changes in the same branch.

---
## 5. Working with Remote Repositories

A remote repository is a version of your project hosted on another server or platform, such as GitHub or GitLab.

It allows developers to share code, collaborate, and synchronize changes between local and remote repositories.

### 5.1 What is a Remote?

A remote is a reference to a repository hosted elsewhere.

The default remote name is commonly `origin`.

To view configured remotes:

```bash
git remote -v
```

### 5.2 Connecting a Local Repository to GitHub

To connect an existing local repository to a GitHub repository:

```bash
git remote add origin https://github.com/username/project.git
```

Here:
- `remote add` adds a remote repository.
- `origin` is the remote's name.
- The URL identifies the remote repository.

### 5.3 Pushing Changes

The `git push` command uploads local commits to a remote repository.

```bash
git push origin main
```

To set the upstream branch for future pushes:

```bash
git push -u origin main
```

After setting the upstream, you can usually use:

```bash
git push
```

### 5.4 Fetching Changes

The `git fetch` command downloads new commits and references from a remote repository without automatically merging them into your current branch.

```bash
git fetch origin
```

To fetch updates from all configured remotes:

```bash
git fetch --all
```

### 5.5 Pulling Changes

The `git pull` command fetches remote changes and integrates them into the current local branch.

```bash
git pull origin main
```

It generally performs a fetch followed by a merge. Its behavior can be changed through Git configuration or options.

### 5.6 Cloning a Remote Repository

To create a local copy of an existing remote repository:

```bash
git clone https://github.com/username/project.git
```

To clone into a directory with a specific name:

```bash
git clone https://github.com/username/project.git my-folder
```

### 5.7 Renaming and Removing Remotes

Rename a remote:

```bash
git remote rename origin upstream
```

Remove a remote:

```bash
git remote remove origin
```

### 5.8 Understanding Common Remote Commands

| Command | Purpose |
|---|---|
| `git remote -v` | Lists remote repository URLs |
| `git remote add origin URL` | Adds a remote repository |
| `git push origin main` | Pushes commits to the remote main branch |
| `git pull origin main` | Fetches and integrates remote changes |
| `git fetch origin` | Downloads remote updates |
| `git clone URL` | Creates a local copy of a remote repository |
| `git remote remove origin` | Removes a configured remote |

### 5.9 Best Practices

- Pull or fetch updates before starting collaborative work.
- Push commits regularly.
- Verify the remote URL before pushing.
- Use meaningful branch names.
- Avoid pushing incomplete or untested changes to shared branches.

---
## 6. Undoing Changes & Resolving Conflicts

Git provides commands to undo modifications, restore previous versions, and resolve conflicts that occur when changes from different branches cannot be combined automatically.

### 6.1 Discarding Unstaged Changes

To discard changes made to a specific file:

```bash
git restore filename
```

This restores the file to its state in the latest commit, discarding unstaged modifications.

### 6.2 Unstaging Files

To remove a file from the staging area without deleting its changes:

```bash
git restore --staged filename
```

The changes remain in the working directory.

### 6.3 Undoing the Last Commit

**1. Using `git reset --soft`**

```bash
git reset --soft HEAD~1
```

- Removes the latest commit.
- Keeps its changes staged.

**2. Using `git reset --mixed`**

```bash
git reset --mixed HEAD~1
```

- Removes the latest commit.
- Keeps its changes in the working directory.
- Unstages the changes.

**3. Using `git reset --hard`**

```bash
git reset --hard HEAD~1
```

- Removes the latest commit from the current branch.
- Discards associated tracked-file changes.
- Can permanently destroy uncommitted work.

**Warning:** Avoid `--hard` unless you are certain you no longer need the changes.

### 6.4 Reverting a Commit

The `git revert` command creates a new commit that reverses the changes introduced by an earlier commit.

```bash
git revert commit-id
```

Unlike `git reset`, it does not remove the original commit from history. It is generally safer for shared branches.

### 6.5 Temporarily Saving Changes with Stash

The `git stash` command temporarily saves uncommitted changes so you can work on something else.

Save changes:

```bash
git stash
```

View saved stashes:

```bash
git stash list
```

Restore the most recent stash and remove it from the stash list:

```bash
git stash pop
```

Restore a stash without removing it:

```bash
git stash apply
```

### 6.6 What is a Merge Conflict?

A merge conflict occurs when Git cannot automatically combine changes from different branches.

This commonly happens when two branches modify the same part of a file differently.

Example conflict:

```text
<<<<<<< HEAD
Welcome to the main branch.
=======
Welcome to the feature branch.
>>>>>>> feature-login
```

- `<<<<<<< HEAD` marks the current branch's version.
- `=======` separates the two versions.
- `>>>>>>> feature-login` marks the incoming branch's version.

### 6.7 Resolving Merge Conflicts

**Step 1:** Run the merge command.

```bash
git merge feature-login
```

**Step 2:** Identify the files containing conflicts.

```bash
git status
```

**Step 3:** Open the conflicting files and manually edit them to keep the correct changes.

Remove the conflict markers after resolving the content.

**Step 4:** Stage the resolved files.

```bash
git add filename
```

**Step 5:** Complete the merge.

```bash
git commit
```

Git records the merge commit if one is required.

### 6.8 Aborting a Merge

If you want to cancel a merge that has not been completed:

```bash
git merge --abort
```

This attempts to restore the state from before the merge began.

### 6.9 Important Commands Summary

| Command | Purpose |
|---|---|
| `git restore filename` | Discards unstaged changes in a file |
| `git restore --staged filename` | Unstages a file |
| `git reset --soft HEAD~1` | Undoes the last commit but keeps changes staged |
| `git reset --mixed HEAD~1` | Undoes the last commit and unstages changes |
| `git reset --hard HEAD~1` | Undoes the last commit and discards tracked changes |
| `git revert commit-id` | Creates a new commit that reverses an earlier commit |
| `git stash` | Temporarily saves uncommitted changes |
| `git stash pop` | Restores and removes the latest stash |
| `git merge --abort` | Cancels an ongoing merge |

### 6.10 Best Practices

- Prefer `git revert` for undoing commits already shared with others.
- Review changes before using reset commands.
- Avoid `git reset --hard` unless you understand its consequences.
- Resolve conflicts carefully before committing.
- Use `git stash` when you need to switch tasks without committing unfinished work.

---
## 7. Git Workflows, Best Practices & Resources

Git workflows define how developers organize branches, commits, and collaboration within a project.

### 7.1 Common Git Workflows

**1. Feature Branch Workflow**

Each new feature or bug fix is developed in a separate branch.

Typical steps:

```bash
git switch main
git pull origin main
git switch -c feature-login

# Make changes
git add .
git commit -m "Add login feature"

git push -u origin feature-login
```

After pushing, developers can create a Pull Request on GitHub to propose merging the changes into `main`.

**2. Centralized Workflow**

All developers work with a shared central repository. They pull updates, make changes, commit locally, and push their commits to the shared repository.

**3. Forking Workflow**

Developers create their own copy (fork) of another repository, make changes in their fork, and submit a Pull Request to the original repository.

This workflow is commonly used in open-source projects.

### 7.2 Understanding Pull Requests

A Pull Request (PR) is a request to merge changes from one branch or repository into another.

It allows developers to:
- Review code before merging.
- Discuss proposed changes.
- Suggest improvements.
- Run automated tests.
- Approve or request changes.

Pull Requests are commonly created on GitHub after pushing a feature branch.

### 7.3 Best Practices

- Write clear and meaningful commit messages.
- Commit small, logically related changes.
- Create separate branches for features and bug fixes.
- Pull or fetch updates regularly.
- Review code before merging.
- Never commit passwords, API keys, or sensitive credentials.
- Use `.gitignore` to exclude unnecessary files.
- Avoid rewriting shared branch history without coordination.

### 7.4 Common Git Commands — Quick Reference

| Command | Purpose |
|---|---|
| `git init` | Initialize a repository |
| `git clone URL` | Clone a repository |
| `git status` | Check repository status |
| `git add .` | Stage changes |
| `git commit -m "message"` | Commit changes |
| `git push` | Upload commits |
| `git pull` | Fetch and integrate updates |
| `git fetch` | Download remote updates |
| `git branch` | List branches |
| `git switch -c branch-name` | Create and switch to a branch |
| `git merge branch-name` | Merge a branch |
| `git log --oneline` | View compact commit history |
| `git stash` | Temporarily save changes |
| `git revert commit-id` | Reverse a commit |

### 7.5 Useful Resources

- [Official Git Website](https://git-scm.com/)
- [Git Documentation](https://git-scm.com/doc)
- [Pro Git Book](https://git-scm.com/book/en/v2)
- [GitHub Documentation](https://docs.github.com/)
- [Learn Git Branching](https://learngitbranching.js.org/)

### 7.6 Final Notes

- Practice Git commands using small projects.
- Understand the difference between local and remote repositories.
- Use branches to organize development.
- Review changes before committing or merging.
- Learn to resolve conflicts instead of avoiding collaboration.

---
